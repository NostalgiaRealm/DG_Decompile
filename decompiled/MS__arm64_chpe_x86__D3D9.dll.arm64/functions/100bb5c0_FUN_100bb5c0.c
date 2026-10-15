/*
 * FUN_100bb5c0 at 100bb5c0
 * undefined FUN_100bb5c0(void)
 * Address ranges: 100bb5c0-100bb73f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bb5c0(int *param_1,byte param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_80 [4];
  undefined4 local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  piVar1 = param_1 + 9;
  if (*piVar1 != -1) {
    return;
  }
  uVar2 = param_1[0xb];
  if ((int)uVar2 < 0x47) {
    if (((uVar2 < 0x19) && ((0x1000800U >> (ulonglong)(uVar2 & 0x1f) & 1) != 0)) || (uVar2 != 0x1c))
    {
LAB_100bb64c:
      *piVar1 = param_1[6];
      return;
    }
    uVar4 = 0x1d;
  }
  else if ((int)uVar2 < 0x48) {
    uVar4 = 0x48;
  }
  else if (uVar2 == 0x4a) {
    uVar4 = 0x4b;
  }
  else {
    if (uVar2 != 0x4d) goto LAB_100bb64c;
    uVar4 = 0x4e;
  }
  iVar3 = FUN_10111c30(*(undefined4 *)(param_1[2] + 0x15d8),1);
  *piVar1 = iVar3;
  if (iVar3 != -1) {
    iStack_6c = (uint)param_2 * 4 + 5;
    local_68 = 0x1688;
    uStack_58 = 0;
    local_60 = 0;
    if (iStack_6c == 5) {
      local_60 = 0xffffffff00000000;
      uStack_58 = 0x100000000;
    }
    else if (iStack_6c == 9) {
      uStack_58 = 0;
      local_60 = 0xffffffff00000000;
    }
    local_50 = 0;
    local_70 = uVar4;
    FUN_10112730(*(undefined4 *)(param_1[2] + 0x15d8),local_80,iVar3,0);
    if (param_3 == 0) {
      param_3 = param_1[3];
    }
    FUN_101129b8(*param_1 + 0x520,param_1[1],param_3,&local_70,local_80[0]);
  }
  return;
}

