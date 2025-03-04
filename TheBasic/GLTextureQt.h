#pragma once
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include <QOpenGLVertexArrayObject>
#include <QOpenGLBuffer>
#include <QOpenGLTexture>

//OpenGL Qt封装的类进行纹理渲染
//QOpenGLWidget窗口上下文
//QOpenGLFunctions访问OpenGL接口，可以不继承作为成员变量使用
class GLTextureQt
        : public QOpenGLWidget
        , protected QOpenGLFunctions_3_3_Core
{
public:
    explicit GLTextureQt(QWidget *parent = nullptr);
    ~GLTextureQt();

protected:
    //【】继承QOpenGLWidget后重写这三个虚函数
    //设置OpenGL资源和状态。在第一次调用resizeGL或paintGL之前被调用一次
    void initializeGL() override;
    //渲染OpenGL场景，每当需要更新小部件时使用
    void paintGL() override;
    //设置OpenGL视口、投影等，每当尺寸大小改变时调用
    void resizeGL(int width, int height) override;

private:
    //着色器程序
    QOpenGLShaderProgram shaderProgram;
    //顶点数组对象
    QOpenGLVertexArrayObject vao;
    //顶点缓冲
    QOpenGLBuffer vbo;
    //索引缓冲
    QOpenGLBuffer ebo;
    //纹理（因为不能赋值，所以只能声明为指针）
    QOpenGLTexture *texture{ nullptr };
};


