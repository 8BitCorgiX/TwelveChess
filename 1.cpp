#include<iostream>
using namespace std;
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1000,800), "SFML works!");
	sf::Texture back;
	if (!back.loadFromFile("asset/map.jpg"))
	{

	}
	sf::Sprite background(back);
	sf::Vector2f targetSize(500.0f, 800.0f);
	background.setScale(
	targetSize.x / background.getLocalBounds().width,
	targetSize.y / background.getLocalBounds().height);


	//menteribiru
	sf::Texture mb;
	if (!mb.loadFromFile("asset/mentri-biru.jpg"))
	{

	}
	sf::Sprite menteribiru(mb);
	sf::Vector2f mb1(110.f, 110.f);
	menteribiru.setScale(
		mb1.x / menteribiru.getLocalBounds().height,
		mb1.y / menteribiru.getLocalBounds().height);
	


	//rajabiru
	sf::Texture rb;
	if (!rb.loadFromFile("asset/raja-biru.jpg"))
	{

	}
	sf::Sprite rajabiru(rb);
	sf::Vector2f rb1(110.f, 110.f);
	rajabiru.setScale(
		rb1.x / rajabiru.getLocalBounds().height,
		rb1.y / rajabiru.getLocalBounds().height);



	//bentengbiru
	sf::Texture bb;
	if (!bb.loadFromFile("asset/benteng-biru.jpg"))
	{

	}
	sf::Sprite bentengbiru(bb);
	sf::Vector2f bb1(110.f, 110.f);
	bentengbiru.setScale(
		bb1.x / bentengbiru.getLocalBounds().height,
		bb1.y / bentengbiru.getLocalBounds().height);



	//pionbiru
	sf::Texture pb;
	if (!pb.loadFromFile("asset/pion-biru.jpg"))
	{

	}
	sf::Sprite pionbiru(pb);
	sf::Vector2f pb1(110.f, 110.f);
	pionbiru.setScale(
		pb1.x / pionbiru.getLocalBounds().height,
		pb1.y / pionbiru.getLocalBounds().height);

	//starting point biru
	menteribiru.setPosition(sf::Vector2f(28, 148));
	rajabiru.setPosition(sf::Vector2f(193, 148));
	bentengbiru.setPosition(sf::Vector2f(361, 148));
	pionbiru.setPosition(sf::Vector2f(193, 279));



	//menterimerah
	sf::Texture mm;
	if (!mm.loadFromFile("asset/mentri-merah.jpg"))
	{

	}
	sf::Sprite menterimerah(mm);
	sf::Vector2f mm2(110.f, 110.f);
	menterimerah.setScale(
		mm2.x / menterimerah.getLocalBounds().height,
		mm2.y / menterimerah.getLocalBounds().height);



	//rajamerah
	sf::Texture rm;
	if (!rm.loadFromFile("asset/raja-merah.jpg"))
	{

	}
	sf::Sprite rajamerah(rm);
	sf::Vector2f rm2(110.f, 110.f);
	rajamerah.setScale(
		rm2.x / rajamerah.getLocalBounds().height,
		rm2.y / rajamerah.getLocalBounds().height);



	//bentengmerah
	sf::Texture bm;
	if (!bm.loadFromFile("asset/benteng-merah.jpg"))
	{

	}
	sf::Sprite bentengmerah(bm);
	sf::Vector2f bm2(110.f, 110.f);
	bentengmerah.setScale(
		bm2.x / bentengmerah.getLocalBounds().height,
		bm2.y / bentengmerah.getLocalBounds().height);



	//pionmerah
	sf::Texture pm;
	if (!pm.loadFromFile("asset/pion-merah.jpg"))
	{

	}
	sf::Sprite pionmerah(pm);
	sf::Vector2f pm2(110.f, 110.f);
	pionmerah.setScale(
		pm2.x / pionmerah.getLocalBounds().height,
		pm2.y / pionmerah.getLocalBounds().height);

	//starting point biru
	bentengmerah.setPosition(sf::Vector2f(28, 541));
	rajamerah.setPosition(sf::Vector2f(193, 541));
	menterimerah.setPosition(sf::Vector2f(361, 541));
	pionmerah.setPosition(sf::Vector2f(193, 410));

	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();
		window.draw(background);
		window.draw(menteribiru);
		window.draw(rajabiru);
		window.draw(bentengbiru);
		window.draw(pionbiru);
		window.draw(pionmerah);
		window.draw(menterimerah);
		window.draw(rajamerah);
		window.draw(bentengmerah);
		window.display();
	}
	
	return 0;
}