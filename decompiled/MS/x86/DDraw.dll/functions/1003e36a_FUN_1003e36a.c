/*
 * FUN_1003e36a at 1003e36a
 * undefined4 __fastcall FUN_1003e36a(byte * param_1, uint * param_2, int * param_3)
 * Address ranges: 1003e36a-1003e503
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003e36a(byte *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  char local_a0 [128];
  undefined8 local_20;
  int local_14;
  uint local_10;
  
  local_10 = 0;
  local_20 = 0;
  iVar7 = 1;
  iVar1 = FUN_100616be(param_1,(byte *)" %d %c");
  if (iVar1 == 1) {
    *param_2 = local_10;
    *param_3 = 1;
    piVar5 = param_3;
  }
  else {
    local_14 = 0;
    iVar2 = FUN_100616be(param_1,(byte *)" .%llu %c");
    iVar1 = iVar7;
    if (iVar2 == 1) {
      FUN_100616be(param_1,&DAT_10065c70);
      if ((uint)local_20 == 0 && local_20._4_4_ == 0) {
        *param_2 = 0;
        iVar1 = 1;
      }
      else {
        pcVar3 = FUN_10061286(local_a0);
        uVar4 = local_10;
        if ((char *)0x6 < pcVar3) {
          uVar8 = FUN_1003e01a((int)(pcVar3 + -6));
          uVar8 = __aulldiv((uint)local_20,local_20._4_4_,(uint)uVar8,
                            (uint)((ulonglong)uVar8 >> 0x20));
          pcVar3 = (char *)0x6;
          uVar4 = (uint)uVar8;
        }
        uVar4 = FUN_1003dfe8(uVar4,&local_14);
        *param_2 = uVar4;
        for (local_14 = (int)pcVar3 - local_14; local_14 != 0; local_14 = local_14 + -1) {
          iVar1 = iVar1 * 10;
        }
      }
    }
    else {
      piVar5 = (int *)FUN_100616be(param_1,(byte *)" %d.%llu %c");
      if (piVar5 != (int *)0x2) {
        iVar7 = 0;
        goto LAB_1003e4fd;
      }
      FUN_100616be(param_1,(byte *)"%d.%s ");
      pcVar3 = FUN_10061286(local_a0);
      if (pcVar3 < (char *)0x7) {
        uVar4 = (uint)local_20;
      }
      else {
        uVar8 = FUN_1003e01a((int)(pcVar3 + -6));
        uVar8 = __aulldiv((uint)local_20,local_20._4_4_,(uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20)
                         );
        pcVar3 = (char *)0x6;
        uVar4 = (uint)uVar8;
      }
      uVar4 = FUN_1003dfe8(uVar4,&local_14);
      local_14 = (int)pcVar3 - local_14;
      iVar2 = iVar7;
      for (iVar6 = local_14; iVar6 != 0; iVar6 = iVar6 + -1) {
        iVar2 = iVar2 * 10;
      }
      *param_2 = iVar2 * local_10 + uVar4;
      for (; local_14 != 0; local_14 = local_14 + -1) {
        iVar1 = iVar1 * 10;
      }
    }
    *param_3 = iVar1;
    piVar5 = param_3;
  }
LAB_1003e4fd:
  return CONCAT31((int3)((uint)piVar5 >> 8),(char)iVar7);
}

