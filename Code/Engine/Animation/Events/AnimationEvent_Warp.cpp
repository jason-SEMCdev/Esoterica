#include "AnimationEvent_Warp.h"

//-------------------------------------------------------------------------

namespace EE::Animation
{
    #if EE_DEVELOPMENT_TOOLS
    InlineString WarpEvent::GetDebugText() const
    {
        if ( m_type == Type::RotationOnly )
        {
            return "Rotation Only";
        }

        return "Full";
    }
    #endif
}