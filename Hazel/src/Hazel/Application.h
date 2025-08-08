#pragma once

#include "Core.h"

#include "Window.h"
#include "Hazel/LayerStack.h"
#include "Hazel/Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"

namespace Hazel
{
	class HAZEL_API Application
	{
	public:
		Application();
		virtual	~Application();
		
		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PopLayer(Layer* layer);
	private:
		std::unique_ptr<Window> m_Window;

		bool m_Running = true;
		bool OnWindowClosed(WindowCloseEvent& e);
		LayerStack m_LayerStack;
	};
	Application* CreateApplication();
}


