/*
 * FUN_180065668 at 180065668
 * undefined __fastcall FUN_180065668(undefined8 param_1, uint * param_2, int param_3, uint param_4, uint param_5, uint param_6, ulonglong param_7, longlong * param_8, uint param_9)
 * Address ranges: 180065668-180065f32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065668(undefined8 param_1,uint *param_2,int param_3,uint param_4,uint param_5,
                  uint param_6,ulonglong param_7,longlong *param_8,uint param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_5;
  if (param_9 != 0) {
    uVar1 = param_9;
  }
  if ((param_3 - 2U & 0xfffffffb) == 0) {
    FUN_1800edbe0(param_2,param_8,0x10,(ulonglong)param_5);
    FUN_1800edbe0(param_2,param_8,0x44,(ulonglong)param_5);
    FUN_1800edbe0(param_2,param_8,0x38,(ulonglong)param_5);
  }
  if (param_3 == 5) {
    if (param_5 != uVar1) {
      FUN_1800edbe0(param_2,param_8,0x36,(ulonglong)param_5);
    }
LAB_180065852:
    FUN_1800edbe0(param_2,param_8,0x38,(ulonglong)param_5);
LAB_180065866:
    uVar1 = (uint)(param_3 == 6);
    iVar4 = 0;
    if (param_3 == 6) {
      iVar4 = 0x10;
    }
    uVar2 = (uint)(param_7 >> 0x32) & 1 | (ushort)(param_7 >> 0x30) & 2;
    if (uVar2 == 0) {
LAB_180065cfd:
      FUN_1800ec878((int *)param_2,param_4,1,param_4 + 0x10);
      FUN_1800ec830((int *)param_2,iVar4 + param_4,uVar1,iVar4 + param_4);
      FUN_1800edbe0(param_2,param_8,0x46,(ulonglong)param_5);
      if (uVar2 == 0) goto LAB_180065daa;
    }
    else {
      if (uVar2 != 1) {
        if (uVar2 == 2) goto LAB_180065cfd;
        if (uVar2 != 3) goto LAB_180065c26;
      }
      uVar3 = 0;
      do {
        FUN_1800ec878((int *)param_2,param_4,1,param_4 + 0x10);
        FUN_1800ec830((int *)param_2,iVar4 + param_4,uVar1,iVar4 + param_4);
        FUN_1800edbe0(param_2,param_8,0x80000046,(ulonglong)(uint)(&DAT_180102788)[uVar3]);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      FUN_1800ec878((int *)param_2,param_4,1,param_4 + 0x10);
      FUN_1800ec830((int *)param_2,iVar4 + param_4,uVar1,iVar4 + param_4);
      FUN_1800edbe0(param_2,param_8,0x46,(ulonglong)param_5);
      FUN_1800edbe0(param_2,param_8,0x11,(ulonglong)param_6);
      FUN_1800edbe0(param_2,param_8,0x32,(ulonglong)param_5);
      if (uVar2 == 1) {
LAB_180065daa:
        FUN_1800edbe0(param_2,param_8,0x36,(ulonglong)param_5);
      }
    }
  }
  else {
    if (param_3 == 6) goto LAB_180065852;
    if (param_3 == 0) {
      FUN_1800edbe0(param_2,param_8,0x36,(ulonglong)param_5);
      return;
    }
    if (param_3 == 1) goto LAB_180065bb9;
    if (param_3 == 2) {
      FUN_1800ec878((int *)param_2,param_4,0,param_4);
      FUN_1800ec830((int *)param_2,param_4 + 0x10,1,param_4 + 0x10);
LAB_180065e9f:
      FUN_1800edbe0(param_2,param_8,0x45,(ulonglong)param_5);
      goto LAB_180065c48;
    }
    if (param_3 == 3) {
      FUN_1800ec878((int *)param_2,param_4,0,param_4);
      FUN_1800ec830((int *)param_2,param_4 + 0x20,2,param_4 + 0x20);
      goto LAB_180065e9f;
    }
    if (param_3 != 4) {
      if ((param_3 != 5) && (param_3 != 6)) {
        if (param_3 == 7) goto LAB_180065bb9;
        goto LAB_180065c26;
      }
      goto LAB_180065866;
    }
LAB_180065bb9:
    iVar4 = 0;
    uVar1 = param_4;
    FUN_1800ec878((int *)param_2,param_4,0,param_4);
    FUN_1800ec830((int *)param_2,param_4,iVar4,uVar1);
    FUN_1800edbe0(param_2,param_8,0x45,(ulonglong)param_5);
  }
LAB_180065c26:
  if ((((param_3 != 1) && (param_3 != 2)) && (param_3 != 3)) && ((param_3 != 4 && (param_3 != 7))))
  {
    return;
  }
LAB_180065c48:
  if ((param_7 >> 0x3d & 1) != 0) {
    FUN_1800edbe0(param_2,param_8,1,(ulonglong)param_5);
    FUN_1800edbe0(param_2,param_8,0x3c,(ulonglong)param_5);
  }
  return;
}

