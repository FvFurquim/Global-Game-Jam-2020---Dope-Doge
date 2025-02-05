using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{

	public static bool isPaused = false;
	public GameObject pauseMenuUI;

    void Update() {

    	if(Input.GetKeyDown(KeyCode.Escape)){

    		if(isPaused)
    			Resume();

    		else
    			Pause();
    	}
    }

    public void Resume(){

    	pauseMenuUI.SetActive(false);
    	Time.timeScale = 1f;
    	isPaused = false;
    }

    void Pause(){

    	pauseMenuUI.SetActive(true);
    	Time.timeScale = 0f;
    	isPaused = true;
    }

    public void LoadMenu(){

    	SceneManager.LoadScene(0);
    }

    public void Restart(){

    	Resume();
    	SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
