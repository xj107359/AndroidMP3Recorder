package cn.sopho.destiny.androidmp3recorder;

import android.app.Activity;
import android.os.Environment;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

import java.io.File;
import java.io.IOException;

import cn.sopho.destiny.lamelibrary.MP3Recorder;

public class MainActivity extends Activity {
    private MP3Recorder mRecorder = new MP3Recorder(new File(Environment.getExternalStorageDirectory(),"test.mp3"));

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView tvVersion = (TextView)findViewById(R.id.tvVersion);
        tvVersion.setText(mRecorder.getLameVersion());

        Button btnStart = (Button) findViewById(R.id.btnStart);
        btnStart.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                try {
                    mRecorder.start();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        });
        Button btnStop = (Button) findViewById(R.id.btnStop);
        btnStop.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                mRecorder.stop();
            }
        });
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        mRecorder.stop();
    }
}
