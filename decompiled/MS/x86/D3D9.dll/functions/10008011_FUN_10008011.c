/*
 * FUN_10008011 at 10008011
 * undefined4 __thiscall FUN_10008011(void * this, char param_1, undefined4 param_2, int param_3)
 * Address ranges: 10008011-1000812a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10008011(void *this,char param_1,undefined4 param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_c;
  char local_5;
  
  FUN_10003e40(&local_5,(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
  piVar4 = (int *)FUN_100086e6((void *)((int)this + 0xe48),&param_2);
  if (piVar4 == (int *)0x0) {
    local_c = FUN_100cfd55(0x408);
    iVar5 = FUN_10008720((void *)((int)this + 0xe48),&param_2,&local_c);
    piVar4 = (int *)(iVar5 + 4);
    FUN_100cfed0((int *)*piVar4,0,0x408);
  }
  uVar8 = 0x8007000e;
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar4;
    uVar6 = 0;
    if (param_1 == '\0') {
      do {
        if (*(char *)(param_3 + 3 + uVar6 * 4) != -1) goto LAB_1000811a;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x100);
      if (uVar6 != 0x100) goto LAB_1000811a;
    }
    bVar3 = false;
    uVar6 = 0;
    do {
      iVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(param_3 + 3 + uVar6 * 4),
                                         *(undefined1 *)(param_3 + uVar6 * 4)),
                                *(undefined1 *)(param_3 + 1 + uVar6 * 4)),
                       *(undefined1 *)(param_3 + 2 + uVar6 * 4));
      iVar2 = *(int *)(iVar5 + uVar6 * 4);
      *(int *)(iVar5 + uVar6 * 4) = iVar7;
      bVar3 = (bool)(bVar3 | iVar7 != iVar2);
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x100);
    if (bVar3) {
      puVar1 = (uint *)(iVar5 + 0x400);
      uVar6 = *puVar1;
      *puVar1 = *puVar1 + 1;
      *(uint *)(iVar5 + 0x404) = *(int *)(iVar5 + 0x404) + (uint)(0xfffffffe < uVar6);
      *(undefined4 *)((int)this + 0x667c) = 0xffff;
      *(undefined4 *)((int)this + 0x6688) = 0x1f;
    }
    uVar8 = 0;
  }
LAB_1000811a:
  FUN_10003e89(&local_5);
  return uVar8;
}

