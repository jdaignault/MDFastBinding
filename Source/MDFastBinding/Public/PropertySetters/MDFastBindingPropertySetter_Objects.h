﻿#pragma once

#include "IMDFastBindingPropertySetter.h"

/**
 * 
 */
class MDFASTBINDING_API FMDFastBindingPropertySetter_Objects : public IMDFastBindingPropertySetter
{
public:
	FMDFastBindingPropertySetter_Objects();
	
	virtual const TSet<FFieldClass*>& GetSupportedFieldTypes() const override { return SupportedFieldTypes; }
	virtual void SetProperty(const FProperty& DestinationProp, void* DestinationValuePtr, const FProperty& SourceProp, const void* SourceValuePtr) const override;
	virtual bool CanSetProperty(const FProperty& DestinationProp, const FProperty& SourceProp) const override;

private:
	TSet<FFieldClass*> SupportedFieldTypes;

};
