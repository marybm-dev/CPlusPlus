    GraphicsWindow(500, 500, "black");
    DrawRectangle(200, 200, 100, 50, "white");
    DrawString("Run", 220, 210, "white", 32);

    UpdateDisplay();

    while (1)
    {
        WaitForMouseDown();
        if (MouseX() > 200 && MouseX() < 300
            && MouseY() > 200 && MouseY() < 250)
        {
            bool mouseReleased = false;
            cout << "Running is ONn";
            DrawRectangle(200, 200, 100, 50, "white", true);
            DrawString("Run", 220, 210, "blue", 32);
            UpdateDisplay();
            while (1)
            {
                cout << "Next generation!n";
                Pause(1);
                if (MouseIsDown() == false)
                    mouseReleased = true;
                if (mouseReleased && MouseIsDown() &&
                    MouseX() > 200 && MouseX() < 300
                    && MouseY() > 200 && MouseY() < 250)
                {
                    cout << "Running is OFFn";
                    DrawRectangle(200, 200, 100, 50, "black", true);
                    DrawRectangle(200, 200, 100, 50, "white");
                    DrawString("Run", 220, 210, "white", 32);
                    UpdateDisplay();
                    break;
                }
            }
        }
    }

}
