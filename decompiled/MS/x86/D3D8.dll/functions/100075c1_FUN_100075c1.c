/*
 * FUN_100075c1 at 100075c1
 * undefined4 __thiscall FUN_100075c1(void * this, char param_1, undefined4 param_2, int param_3)
 * Address ranges: 100075c1-100076cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100075c1(void *this,char param_1,undefined4 param_2,int param_3)

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
  
  FUN_10003838(&local_5,(byte)(*(uint *)((int)this + 0xb0c) >> 2) & 1);
  piVar4 = (int *)FUN_10007b93((void *)((int)this + 0xb84),&param_2);
  if (piVar4 == (int *)0x0) {
    local_c = FUN_100ad475(0x408);
    iVar5 = FUN_10007bcd((void *)((int)this + 0xb84),&param_2,&local_c);
    piVar4 = (int *)(iVar5 + 4);
    FUN_100ada8e((int *)*piVar4,0,0x408);
  }
  uVar8 = 0x8007000e;
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar4;
    uVar6 = 0;
    if (param_1 == '\0') {
      do {
        if (*(char *)(param_3 + 3 + uVar6 * 4) != -1) goto LAB_100076bf;
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x100);
      if (uVar6 != 0x100) goto LAB_100076bf;
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
      *(undefined4 *)((int)this + 0x58a8) = 0xff;
    }
    uVar8 = 0;
  }
LAB_100076bf:
  FUN_10003881(&local_5);
  return uVar8;
}

