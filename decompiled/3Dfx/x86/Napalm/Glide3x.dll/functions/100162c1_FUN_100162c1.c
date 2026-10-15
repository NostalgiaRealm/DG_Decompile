/*
 * FUN_100162c1 at 100162c1
 * bool __thiscall FUN_100162c1(void * this, undefined4 * param_1, char param_2)
 * Address ranges: 100162c1-1001638f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100162c1(void *this,undefined4 *param_1,char param_2)

{
  DWORD dwMaximumSizeLow;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  HANDLE hFileMappingObject;
  LPVOID pvVar4;
  
  *(char *)((int)this + 0x48) = param_2;
  *(bool *)((int)this + 0x49) = (uint)param_1[3] < (uint)param_1[5];
  *(undefined4 *)((int)this + 0x28) = *param_1;
  *(undefined4 *)((int)this + 0x2c) = param_1[1];
  *(undefined4 *)((int)this + 0x30) = param_1[2];
  *(undefined4 *)((int)this + 0x20) = param_1[3];
  *(undefined4 *)((int)this + 0x24) = param_1[4];
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(uint *)((int)this + 4) = ((param_2 == '\0') - 1 & 0xd) + 0x1c;
  *(undefined4 *)((int)this + 0x14) = param_1[6];
  *(undefined4 *)((int)this + 8) = param_1[7];
  *(undefined4 *)((int)this + 0xc) = param_1[8];
  uVar1 = param_1[9];
  *(byte *)((int)this + 0x4a) = *(byte *)((int)this + 0x4a) & 0xfd;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  FUN_100165b8((int)this);
  iVar2 = param_1[4];
  iVar3 = param_1[5];
  *(int *)((int)this + 0x58) = iVar3;
  dwMaximumSizeLow = iVar2 * iVar3 * 4 + 0x8000;
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0x0,(LPSECURITY_ATTRIBUTES)0x0,4,0,dwMaximumSizeLow,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x4c) = hFileMappingObject;
  pvVar4 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,dwMaximumSizeLow);
  *(LPVOID *)((int)this + 0x54) = pvVar4;
  pvVar4 = MapViewOfFile(*(HANDLE *)((int)this + 0x4c),0xf001f,0,0,dwMaximumSizeLow);
  *(LPVOID *)((int)this + 0x50) = pvVar4;
  return *(int *)((int)this + 0x54) != 0;
}

