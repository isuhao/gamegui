#pragma once

#include <guilib/src/renderer.h>

namespace gui
{
	namespace ogl_platform
	{
		class TextureOGL : public Texture {
		public:
			void update(const void* data, unsigned int width, unsigned int height, Texture::PixelFormat format);
		};

		class RenderDeviceGL : public RenderDevice
		{
		public:
			RenderDeviceGL(filesystem_ptr fs, unsigned int max_quads);
			~RenderDeviceGL();

			TexturePtr createTexture(const void* data, unsigned int width, unsigned int height, Texture::PixelFormat format);
			TexturePtr createTexture(const std::string& filename);

			void renderImmediate(const QuadInfo& q);
			void render(const Batches& batches, const Quads& quads, Size scale);
			
			//void	initPerFrameStates();
			//void	constructor_impl(const Size& display_size);
			//void	setRenderStates();

		protected:	
			//rgde::render::device& m_device;
			//rgde::render::texture_ptr m_currTexture;
			//rgde::render::vertex_buffer_ptr	m_buffer;
			//rgde::render::index_buffer_ptr	m_ibuffer;
			//rgde::render::vertex_declaration_ptr m_vertexDeclaration;
			//int m_bufferPos;	

			//typedef rgde::render::effects::effect shader_effect;
			//typedef rgde::render::effects::param_ptr shader_handle;

			//typedef std::shared_ptr<shader_effect> shader_ptr;
			//shader_ptr				m_shader;

		protected:
			//shader_handle m_handleViewPortSize;
			//shader_handle m_handleGuiTexture;	 
		};
	}
}
