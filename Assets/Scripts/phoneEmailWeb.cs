using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class phoneEmailWeb : MonoBehaviour {

	/* ------------------------------------------------------------------------- */
	// open facebook page
	public void openTechandBeerFacebookPage ()
	{
		float startTime;
		startTime = Time.timeSinceLevelLoad;

		// open the facebook app in IOS
		Application.OpenURL("fb://page/?id=350989365287405");
		// open the facebook app in Andorid
		Application.OpenURL ("fb://page/350989365287405");

		if (Time.timeSinceLevelLoad - startTime <= 1f)
		{
			//fail. Open safari.
			Application.OpenURL("https://www.facebook.com/Orlandotechandbeer/");
		}
	}

	/* ------------------------------------------------------------------------- */
	// open instagram page
//	public void openBluewaveInstagramPage ()
//	{
//		float startTime;
//		startTime = Time.timeSinceLevelLoad;
//
//		// open the instagram app in IOS
//		Application.OpenURL();
//		// open the instagram app in Andorid
//		Application.OpenURL ();
//
//		if (Time.timeSinceLevelLoad - startTime <= 1f)
//		{
//			Application.OpenURL("https://www.instagram.com/bluewaverp/");
//		}
//		}

	/* ------------------------------------------------------------------------- */
	// open webpage 
	public void openLaunchableWebPage ()
	{
		Application.OpenURL("https://teamlaunchable.com/");
	}

	public void openPanderaWebPage ()
	{
		Application.OpenURL ("http://panderasystems.com/");
	}

	public void TeamLaunchableSite ()
	{
		Application.OpenURL ("https://TeamLaunchable.com");
	}
		
	public void LAWSite ()
	{
		Application.OpenURL ("http://LeppardLaw.com");
	}

	public void ElomuseSite ()
	{
		Application.OpenURL ("http://Elomuse.com");
	}

	public void Web_BlueWave ()
	{
		Application.OpenURL ("https://www.bluewaverp.com");
	}

	public void Instagram_BlueWave ()
	{
//		Application.OpenURL ("https://www.instagram.com/bluewaverp/");

		Application.OpenURL ("instagram://user?username=bluewaverp");

	}



		
	/* ------------------------------------------------------------------------- */
	// phone call

	public void Phone_Launchable ()
	{
		Application.OpenURL ("tel://4079063034");
	}

	public void Phone_Dollar ()
	{
		Application.OpenURL ("tel://5613058898");
	}

	public void Phone_Timbr ()
	{
		Application.OpenURL ("tel://4042711157");
	}

	public void Phone_PALS ()
	{
		Application.OpenURL ("tel://4079065514");
	}

	public void Phone_Edgefactory ()
	{
		Application.OpenURL ("tel://4072913343");
	}

	public void Phone_MattThomas ()
	{
		Application.OpenURL ("tel://18883868420");
	}

	public void Phone_Transient ()
	{
		Application.OpenURL ("tel://4074913299");
	}

	public void Phone_Law ()
	{
		Application.OpenURL ("tel://4074764111");
	}

	public void Phone_Finest ()
	{
		Application.OpenURL ("tel://4072356549");
	}

	public void Phone_Elomuse ()
	{
		Application.OpenURL ("tel://4072699542");
	}

	public void Phone_Salus ()
	{
		Application.OpenURL("tel://9546083230");
	}

	/* ------------------------------------------------------------------------- */
	//	 open email 
	public void Email_Launchable ()
	{
		string email = "Alfred@TeamLaunchable.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Dollar ()
	{
		string email = "Joe@TeamLaunchable.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Ghost ()
	{
		string email = "paranormal.intuition@gmail.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Grow ()
	{
		string email = "vzabala@growfl.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Timbr ()
	{
		string email = "walker@timbrtech.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_PALS ()
	{
		string email = "jeff@drinksforpals.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Caleb ()
	{
		string email = "caleb@thegreenhouseagency.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Edgefactory ()
	{
		string email = "info@edgefactory.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_MattThomas ()
	{
		string email = "info@panderasystems.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Parker ()
	{
		string email = "Parker.beatbox@gmail.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Transient ()
	{
		string email = "Tom@transientpath.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_TechLaw ()
	{
		string email = "donna@thetechlawfirm.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Law()
	{
		string email = "joel@leppardlaw.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Finest()
	{
		string email = "Finestartphotography@gmail.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}


	public void Email_Elomuse()
	{
		string email = "Info@elomuse.com";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}

	public void Email_Salus () 
	{
		string email = "nick@salusapp.net";
		string subject = MyEscapeURL(" ");
		string body = MyEscapeURL(" ");
		Application.OpenURL("mailto:" + email + "?subject=" + subject + "&body=" + body);
	}




	string MyEscapeURL (string url)
	{
		return WWW.EscapeURL(url).Replace("+","%20");
	}
	/* ------------------------------------------------------------------------- */

}