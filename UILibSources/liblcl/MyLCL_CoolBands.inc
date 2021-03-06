
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function CoolBands_Create(AOwner: TCoolBar): TCoolBands; extdecl;
begin
  Result :=  TCoolBands.Create(AOwner);
end;

procedure CoolBands_Free(AObj: TCoolBands); extdecl;
begin
  AObj.Free;
end;

function CoolBands_Add(AObj: TCoolBands): TCoolBand; extdecl;
begin
  Result :=  AObj.Add;
end;

function CoolBands_FindBand(AObj: TCoolBands; AControl: TControl): TCoolBand; extdecl;
begin
  Result :=  AObj.FindBand(AControl);
end;

function CoolBands_Owner(AObj: TCoolBands): TPersistent; extdecl;
begin
  Result :=  AObj.Owner;
end;

procedure CoolBands_Assign(AObj: TCoolBands; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

procedure CoolBands_BeginUpdate(AObj: TCoolBands); extdecl;
begin
  AObj.BeginUpdate;
end;

procedure CoolBands_Clear(AObj: TCoolBands); extdecl;
begin
  AObj.Clear;
end;

procedure CoolBands_Delete(AObj: TCoolBands; Index: Integer); extdecl;
begin
  AObj.Delete(Index);
end;

procedure CoolBands_EndUpdate(AObj: TCoolBands); extdecl;
begin
  AObj.EndUpdate;
end;

function CoolBands_FindItemID(AObj: TCoolBands; ID: Integer): TCollectionItem; extdecl;
begin
  Result :=  AObj.FindItemID(ID);
end;

function CoolBands_GetNamePath(AObj: TCoolBands): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

function CoolBands_Insert(AObj: TCoolBands; Index: Integer): TCollectionItem; extdecl;
begin
  Result :=  AObj.Insert(Index);
end;

function CoolBands_ClassType(AObj: TCoolBands): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function CoolBands_ClassName(AObj: TCoolBands): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function CoolBands_InstanceSize(AObj: TCoolBands): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function CoolBands_InheritsFrom(AObj: TCoolBands; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function CoolBands_Equals(AObj: TCoolBands; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function CoolBands_GetHashCode(AObj: TCoolBands): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function CoolBands_ToString(AObj: TCoolBands): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function CoolBands_GetCount(AObj: TCoolBands): Integer; extdecl;
begin
  Result :=  AObj.Count;
end;

function CoolBands_GetItems(AObj: TCoolBands; Index: Integer): TCoolBand; extdecl;
begin
  Result :=  AObj.Items[Index];
end;

procedure CoolBands_SetItems(AObj: TCoolBands; Index: Integer; AValue: TCoolBand); extdecl;
begin
  AObj.Items[Index] := AValue;
end;

function CoolBands_StaticClassType: TClass; extdecl;
begin
  Result := TCoolBands;
end;

exports
  CoolBands_Create,
  CoolBands_Free,
  CoolBands_Add,
  CoolBands_FindBand,
  CoolBands_Owner,
  CoolBands_Assign,
  CoolBands_BeginUpdate,
  CoolBands_Clear,
  CoolBands_Delete,
  CoolBands_EndUpdate,
  CoolBands_FindItemID,
  CoolBands_GetNamePath,
  CoolBands_Insert,
  CoolBands_ClassType,
  CoolBands_ClassName,
  CoolBands_InstanceSize,
  CoolBands_InheritsFrom,
  CoolBands_Equals,
  CoolBands_GetHashCode,
  CoolBands_ToString,
  CoolBands_GetCount,
  CoolBands_GetItems,
  CoolBands_SetItems,
  CoolBands_StaticClassType;

