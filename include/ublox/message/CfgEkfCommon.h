// Generated by commsdsl2comms v3.4.0

/// @file
/// @brief Contains common template parameters independent functionality of
///    @ref ublox::message::CfgEkf message and its fields.

#pragma once

#include <cstdint>
#include <type_traits>
#include "ublox/field/Res4Common.h"

namespace ublox
{

namespace message
{

/// @brief Common types and functions for fields of 
///     @ref ublox::message::CfgEkf message.
/// @see ublox::message::CfgEkfFields
struct CfgEkfFieldsCommon
{
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
    struct DisableEkfCommon
    {
        /// @brief Values enumerator for
        ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
        enum class ValueType : std::uint8_t
        {
            Enabled = 0, ///< value @b Enabled
            Disabled = 1, ///< value @b Disabled
            
            // --- Extra values generated for convenience ---
            FirstValue = 0, ///< First defined value.
            LastValue = 1, ///< Last defined value.
            ValuesLimit = 2, ///< Upper limit for defined values.
            
        };
        
        /// @brief Name of the @ref ublox::message::CfgEkfFields::DisableEkf field.
        static const char* name()
        {
            return "disableEkf";
        }
        
        /// @brief Retrieve name of the enum value
        static const char* valueName(ValueType val)
        {
            static const char* Map[] = {
                "Enabled",
                "Disabled"
            };
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            
            if (MapSize <= static_cast<std::size_t>(val)) {
                return nullptr;
            }
            
            return Map[static_cast<std::size_t>(val)];
        }
        
    };
    
    /// @brief Values enumerator for
    ///     @ref ublox::message::CfgEkfFields::DisableEkf field.
    using DisableEkfVal = DisableEkfCommon::ValueType;
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::ActionFlags field.
    struct ActionFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgEkfFields::ActionFlags field.
        static const char* name()
        {
            return "actionFlags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgEkfFields::ActionFlags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                nullptr,
                "clTab",
                "clCalib",
                nullptr,
                "nomTacho",
                "nomGyro",
                "setTemp",
                "dir"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::ConfigFlags field.
    struct ConfigFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgEkfFields::ConfigFlags field.
        static const char* name()
        {
            return "configFlags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgEkfFields::ConfigFlags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "pulsesPerM",
                "useSerWt"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common functions for
    ///     @ref ublox::message::CfgEkfFields::InverseFlags field.
    struct InverseFlagsCommon
    {
        /// @brief Name of the @ref ublox::message::CfgEkfFields::InverseFlags field.
        static const char* name()
        {
            return "inverseFlags";
        }
        
        /// @brief Retrieve name of the bit of
        ///     @ref ublox::message::CfgEkfFields::InverseFlags field.
        static const char* bitName(std::size_t idx)
        {
            static const char* Map[] = {
                "invDir",
                "invGyro"
            };
        
            static const std::size_t MapSize = std::extent<decltype(Map)>::value;
            if (MapSize <= idx) {
                return nullptr;
            }
        
            return Map[idx];
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::Reserved2 field.
    struct Reserved2Common : public ublox::field::Res4Common
    {
        /// @brief Name of the @ref ublox::message::CfgEkfFields::Reserved2 field.
        static const char* name()
        {
            return "reserved2";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::NomPPDist field.
    struct NomPPDistCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgEkfFields::NomPPDist field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgEkfFields::NomPPDist field.
        static const char* name()
        {
            return "nomPPDist";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::NomZero field.
    struct NomZeroCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgEkfFields::NomZero field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgEkfFields::NomZero field.
        static const char* name()
        {
            return "nomZero";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::NomSens field.
    struct NomSensCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgEkfFields::NomSens field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgEkfFields::NomSens field.
        static const char* name()
        {
            return "nomSens";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::RmsTemp field.
    struct RmsTempCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgEkfFields::RmsTemp field.
        using ValueType = std::uint8_t;
    
        /// @brief Name of the @ref ublox::message::CfgEkfFields::RmsTemp field.
        static const char* name()
        {
            return "rmsTemp";
        }
        
    };
    
    /// @brief Common types and functions for
    ///     @ref ublox::message::CfgEkfFields::TempUpdate field.
    struct TempUpdateCommon
    {
        /// @brief Re-definition of the value type used by
        ///     ublox::message::CfgEkfFields::TempUpdate field.
        using ValueType = std::uint16_t;
    
        /// @brief Name of the @ref ublox::message::CfgEkfFields::TempUpdate field.
        static const char* name()
        {
            return "tempUpdate";
        }
        
    };
    
};

/// @brief Common types and functions of 
///     @ref ublox::message::CfgEkf message.
/// @see ublox::message::CfgEkf
struct CfgEkfCommon
{
    /// @brief Name of the @ref ublox::message::CfgEkf message.
    static const char* name()
    {
        return "CFG-EKF";
    }
    
};

} // namespace message

} // namespace ublox


