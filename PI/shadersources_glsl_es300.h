
static const char* source_vsh_Font = 
"#version 300 es\n"
"in mediump vec2 position;\n"
"out lowp vec4 clr;\n"
"uniform mediump vec2 rotx;\n"
"uniform mediump vec2 roty;\n"
"uniform mediump vec2 translation;\n"
"uniform lowp vec4 colour;\n"
"const lowp vec4 nul = vec4( 0.8, 0.8, 0.7, 1.0 );\n"
"void main()\n"
"{\n"
"    gl_Position.x = dot( position, rotx ) + translation.x;\n"
"    gl_Position.y = dot( position, roty ) + translation.y;\n"
"    gl_Position.z = 1.0;\n"
"    gl_Position.w = 1.0;\n"
"    clr = colour;\n"
"}\n";


static const char* source_fsh_Font =
"#version 300 es\n"
"in  lowp vec4 clr;\n"
"out lowp vec4 fragColor;\n"
"void main()\n"
"{\n"
"    fragColor = clr;\n"
"}\n";


