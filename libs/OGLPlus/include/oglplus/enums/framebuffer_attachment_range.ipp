/*
 *  .file oglplus/enums/framebuffer_attachment_range.ipp
 *
 *  Automatically generated header file. DO NOT modify manually,
 *  edit 'source/enums/oglplus/framebuffer_attachment.txt' instead.
 *
 *  Copyright 2010-2013 Matus Chochlik. Distributed under the Boost
 *  Software License, Version 1.0. (See accompanying file
 *  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
 */

namespace enums {
OGLPLUS_LIB_FUNC aux::CastIterRange<
	const GLenum*,
	FramebufferAttachment
> ValueRange_(FramebufferAttachment*)
#if (!OGLPLUS_LINK_LIBRARY || defined(OGLPLUS_IMPLEMENTING_LIBRARY)) && \
	!defined(OGLPLUS_IMPL_EVR_FRAMEBUFFERATTACHMENT)
#define OGLPLUS_IMPL_EVR_FRAMEBUFFERATTACHMENT
{
static const GLenum _values[] = {
#if defined GL_COLOR_ATTACHMENT0
GL_COLOR_ATTACHMENT0,
#endif
#if defined GL_COLOR_ATTACHMENT1
GL_COLOR_ATTACHMENT1,
#endif
#if defined GL_COLOR_ATTACHMENT2
GL_COLOR_ATTACHMENT2,
#endif
#if defined GL_COLOR_ATTACHMENT3
GL_COLOR_ATTACHMENT3,
#endif
#if defined GL_COLOR_ATTACHMENT4
GL_COLOR_ATTACHMENT4,
#endif
#if defined GL_COLOR_ATTACHMENT5
GL_COLOR_ATTACHMENT5,
#endif
#if defined GL_COLOR_ATTACHMENT6
GL_COLOR_ATTACHMENT6,
#endif
#if defined GL_COLOR_ATTACHMENT7
GL_COLOR_ATTACHMENT7,
#endif
#if defined GL_COLOR_ATTACHMENT8
GL_COLOR_ATTACHMENT8,
#endif
#if defined GL_COLOR_ATTACHMENT9
GL_COLOR_ATTACHMENT9,
#endif
#if defined GL_COLOR_ATTACHMENT10
GL_COLOR_ATTACHMENT10,
#endif
#if defined GL_COLOR_ATTACHMENT11
GL_COLOR_ATTACHMENT11,
#endif
#if defined GL_COLOR_ATTACHMENT12
GL_COLOR_ATTACHMENT12,
#endif
#if defined GL_COLOR_ATTACHMENT13
GL_COLOR_ATTACHMENT13,
#endif
#if defined GL_COLOR_ATTACHMENT14
GL_COLOR_ATTACHMENT14,
#endif
#if defined GL_COLOR_ATTACHMENT15
GL_COLOR_ATTACHMENT15,
#endif
#if defined GL_DEPTH_ATTACHMENT
GL_DEPTH_ATTACHMENT,
#endif
#if defined GL_STENCIL_ATTACHMENT
GL_STENCIL_ATTACHMENT,
#endif
#if defined GL_DEPTH_STENCIL_ATTACHMENT
GL_DEPTH_STENCIL_ATTACHMENT,
#endif
0
};
return aux::CastIterRange<
	const GLenum*,
	FramebufferAttachment
>(_values, _values+sizeof(_values)/sizeof(_values[0])-1);
}
#else
;
#endif
} // namespace enums

