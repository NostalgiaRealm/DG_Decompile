/*
 * FUN_1801a7f60 at 1801a7f60
 * undefined FUN_1801a7f60(void)
 * Address ranges: 1801a7f60-1801a80a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801a7f60(longlong *param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_60 [2];
  undefined4 local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if ((int)param_1[7] != -1) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 8);
  if ((uVar1 < 0x19) && ((0x1000800U >> (ulonglong)(uVar1 & 0x1f) & 1) != 0)) {
LAB_1801a7fc0:
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)((longlong)param_1 + 0x2c);
  }
  else {
    if (uVar1 == 0x1c) {
      uVar3 = 0x1d;
    }
    else if (uVar1 == 0x47) {
      uVar3 = 0x48;
    }
    else if (uVar1 == 0x4a) {
      uVar3 = 0x4b;
    }
    else {
      if (uVar1 != 0x4d) goto LAB_1801a7fc0;
      uVar3 = 0x4e;
    }
    iVar2 = FUN_18020c7c8(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),1);
    *(int *)(param_1 + 7) = iVar2;
    if (iVar2 != -1) {
      iStack_4c = (param_2 & 0xff) * 4 + 5;
      local_48 = 0x1688;
      uStack_38 = 0;
      local_40 = 0;
      if (iStack_4c == 5) {
        local_40 = 0xffffffff00000000;
        uStack_38 = 0x100000000;
      }
      else if (iStack_4c == 9) {
        uStack_38 = 0;
        local_40 = 0xffffffff00000000;
      }
      local_30 = 0;
      local_50 = uVar3;
      FUN_18020d168(*(undefined8 *)(*(longlong *)((longlong)param_1 + 0xc) + 0x1930),local_60,iVar2,
                    0);
      if (param_3 == 0) {
        param_3 = *(longlong *)((longlong)param_1 + 0x14);
      }
      FUN_18020d3a0(*param_1 + 0x6d0,(int)param_1[1],param_3,&local_50,local_60[0]);
    }
  }
  return;
}

