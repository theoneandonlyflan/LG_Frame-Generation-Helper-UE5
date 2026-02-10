# Liberation Games Frame Generation Helper
This plugin implements the functionality of switching Frame Generation technologies on restart with one function.

(Developed in Unreal Engine 5.5.4)

<img width="128" height="128" alt="Icon128" src="https://github.com/user-attachments/assets/d32ac410-0138-437d-9235-b7793dc36ac0" />


# Documentation

**How to**

**1.** Download the latest release from the Releases Tab. (This download has Unreal Engine Versions from 5.4 to 5.7)

**2.** Select the folder based on the project's engine version (Example: LGFrameGenHelper_UE_5_5 for Unreal Engine 5.5)

**3.** Copy the LGFrameGenHelper folder and paste it into either /"ProjectDirectory"/Plugins (If there is none, you can make the folder) or /UE"versionNumber"/Engine/Plugins

**4.** Open the AddToDefaultEngineIni text document and copy all the lines. Paste into the bottom of DefaultEngine.ini

<img width="498" height="413" alt="image" src="https://github.com/user-attachments/assets/8cf7c7af-40cd-4dcc-99bc-638f91df2f2d" />

**5.** Make sure you have the Frame Generation Plugins from the respective companies and enable them in your project.

**6.** In the Project Settings, check to make sure that the Enabled is off in all the Frame Generation Plugin settings.

**7.** Use the Set Frame Generation Method function under the LGFrameGeneration Category in your settings menu (Preferred) or for testing make a simple widget to switch. Right click the Enum on the function and promote to a variable and select based on which Frame Gen Technology you want to enable.

<img width="1551" height="638" alt="image" src="https://github.com/user-attachments/assets/fc5f7e43-9180-494c-8eed-01dd5bc8d1e0" />

**8.** Test within standalone or a packaged project. Select the Method and call the Set Frame Generation Method function and restart and then the selected Frame Generation will be avaliable and Swapchain is provided. (Note: You must implement the functionality of the Frame Generation Tech outside of this plugin)


# Buy Me A Cuppa Tea

If this plugin has helped you and you would wish to donate some money to buy me a cup of tea follow the link below.

https://buymeacoffee.com/libgamesflan
