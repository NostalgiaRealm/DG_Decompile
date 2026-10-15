/*
 * FUN_18002782c at 18002782c
 * bool __fastcall FUN_18002782c(longlong param_1, undefined4 * param_2, char param_3)
 * Address ranges: 18002782c-180027929
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18002782c(longlong param_1,undefined4 *param_2,char param_3)

{
  uint dwMaximumSizeLow;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  HANDLE hFileMappingObject;
  LPVOID pvVar4;
  
  *(char *)(param_1 + 0x48) = param_3;
  *(bool *)(param_1 + 0x49) = (uint)param_2[3] < (uint)param_2[5];
  *(undefined4 *)(param_1 + 0x28) = *param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = param_2[3];
  *(undefined4 *)(param_1 + 0x24) = param_2[4];
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(uint *)(param_1 + 4) = (-(uint)(param_3 != '\0') & 0x1c) + 0x1c;
  *(undefined4 *)(param_1 + 0x14) = param_2[6];
  *(undefined4 *)(param_1 + 8) = param_2[7];
  *(undefined4 *)(param_1 + 0xc) = param_2[8];
  uVar1 = param_2[9];
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xfd;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_180027c18(param_1);
  iVar2 = param_2[5];
  iVar3 = param_2[4];
  *(int *)(param_1 + 0x68) = iVar2;
  dwMaximumSizeLow = iVar2 * iVar3 * 4 + 0x8000;
  hFileMappingObject =
       CreateFileMappingA((HANDLE)0x0,(LPSECURITY_ATTRIBUTES)0x0,4,0,dwMaximumSizeLow,(LPCSTR)0x0);
  *(HANDLE *)(param_1 + 0x50) = hFileMappingObject;
  pvVar4 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,(ulonglong)dwMaximumSizeLow);
  *(LPVOID *)(param_1 + 0x60) = pvVar4;
  pvVar4 = MapViewOfFile(*(HANDLE *)(param_1 + 0x50),0xf001f,0,0,(ulonglong)dwMaximumSizeLow);
  *(LPVOID *)(param_1 + 0x58) = pvVar4;
  return *(longlong *)(param_1 + 0x60) != 0;
}

