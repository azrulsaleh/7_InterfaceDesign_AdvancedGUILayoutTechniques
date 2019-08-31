/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
    
    header.setColour(TextButton::buttonColourId, Colours::cornflowerblue);
    footer.setColour(TextButton::buttonColourId, Colours::cornflowerblue);
    sidebar.setColour(TextButton::buttonColourId, Colours::grey);
    limeContent.setColour(TextButton::buttonColourId, Colours::lime);
    grapefruitContent.setColour(TextButton::buttonColourId, Colours::yellowgreen);
    lemonContent.setColour(TextButton::buttonColourId, Colours::yellow);
    orangeContent.setColour(TextButton::buttonColourId, Colours::orange);
    header.setButtonText("Header");
    footer.setButtonText("Footer");
    sidebar.setButtonText("Sidebar");
    addAndMakeVisible(header);
    addAndMakeVisible(footer);
    addAndMakeVisible(sidebar);
    addAndMakeVisible(limeContent);
    addAndMakeVisible(grapefruitContent);
    addAndMakeVisible(lemonContent);
    addAndMakeVisible(orangeContent);
    
    sideItemA.setColour(TextButton::buttonColourId, Colours::maroon);
    sideItemB.setColour(TextButton::buttonColourId, Colours::maroon);
    sideItemC.setColour(TextButton::buttonColourId, Colours::maroon);
    sideItemA.setButtonText("Item A");
    sideItemB.setButtonText("Item B");
    sideItemC.setButtonText("Item C");
    addAndMakeVisible(sideItemA);
    addAndMakeVisible(sideItemB);
    addAndMakeVisible(sideItemC);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::darkgrey);
}

void MainComponent::resized()
{
    //Hard code
        //limeContent.setBounds(0, 0, 200, 24);
        //grapefruitContent.setBounds(0, 24, 200, 24);
        //lemonContent.setBounds(0, 48, 200, 24);
        //orangeContent.setBounds(0, 72, 200, 24);
    
    //Remove from rectangle
        //auto area = getLocalBounds();
        //auto headerFooterHeight = 36;
        //header.setBounds(area.removeFromTop(headerFooterHeight));
        //footer.setBounds(area.removeFromBottom(headerFooterHeight));
        //    //auto sidebarWidth = 80;
        //    //sidebar.setBounds(area.removeFromLeft(sidebarWidth));
        //    //sidebar.setBounds(area.removeFromRight(sidebarWidth));
        //    //sidebar.setBounds(area.removeFromRight(area.getWidth() / 4));
        //sidebar.setBounds(area.removeFromRight(jmax(80, area.getWidth() / 4)));
        //auto contentItemHeight = 24;
        //orangeContent.setBounds(area.removeFromTop(contentItemHeight));
        //limeContent.setBounds(area.removeFromTop(contentItemHeight));
        //    //grapefruitContent.setBounds(area.removeFromTop(contentItemHeight));
        //    //lemonContent.setBounds(area.removeFromTop(contentItemHeight));
        //grapefruitContent.setBounds(area.removeFromLeft(contentItemHeight));
        //lemonContent.setBounds(area.removeFromLeft(contentItemHeight));
        //    //orangeContent.setBounds(area.removeFromTop(contentItemHeight));
    
    //Sidebar items
        auto area = getLocalBounds();
        auto headerFooterHeight = 36;
        header.setBounds(area.removeFromTop(headerFooterHeight));
        footer.setBounds(area.removeFromBottom(headerFooterHeight));
        auto sideBarArea = area.removeFromRight(jmax(80, area.getWidth() / 4));
        sidebar.setBounds(sideBarArea);
        auto sideItemHeight = 40;
        auto sideItemMargin = 5;
        sideItemA.setBounds(sideBarArea.removeFromTop(sideItemHeight).reduced(sideItemMargin));
        sideItemB.setBounds(sideBarArea.removeFromTop(sideItemHeight).reduced(sideItemMargin));
        sideItemC.setBounds(sideBarArea.removeFromTop(sideItemHeight).reduced(sideItemMargin));
        auto contentItemHeight = 24;
        orangeContent.setBounds(area.removeFromTop(contentItemHeight));
        limeContent.setBounds(area.removeFromTop(contentItemHeight));
        grapefruitContent.setBounds(area.removeFromTop(contentItemHeight));
        lemonContent.setBounds(area.removeFromTop(contentItemHeight));
}
