/*
 * FUN_10007c10 at 10007c10
 * bool __thiscall FUN_10007c10(void * this, int param_1)
 * Address ranges: 10007c10-10007d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_10007c10(void *this,int param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  HCURSOR pHVar5;
  HCURSOR pHVar6;
  undefined4 uVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uStack_8;
  
  uStack_8 = this;
  FUN_10003e40((void *)((int)&uStack_8 + 3),(byte)(*(uint *)((int)this + 0xdd0) >> 2) & 1);
  bVar9 = false;
  if (*(int *)((int)this + 0xde4) != 0) {
    iVar1 = **(int **)((int)this + 0xd94);
    bVar2 = FUN_100138c1(iVar1);
    if (bVar2 == 0) {
      cVar3 = FUN_1002c278();
      if ((cVar3 == '\0') || (*(char *)(iVar1 + 0xd4) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    else {
      pHVar5 = GetCursor();
      pHVar6 = (HCURSOR)FUN_1002c4e7();
      bVar9 = pHVar5 != pHVar6;
    }
    uVar8 = 0;
    if (*(int *)((int)this + 0xd98) != 0) {
      bVar2 = 1;
      do {
        bVar4 = FUN_100138c1(*(int *)(*(int *)((int)this + 0xd94) + uVar8 * 4));
        bVar2 = bVar2 & bVar4;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)this + 0xd98));
      if (bVar2 == 0) {
        FUN_1002c4e7();
        FUN_1002c67c();
        uVar8 = 0;
        if (*(int *)((int)this + 0xd98) != 0) {
          do {
            FUN_10013951(*(void **)(*(int *)((int)this + 0xd94) + uVar8 * 4),(uint)(param_1 != 0));
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)((int)this + 0xd98));
        }
        goto LAB_10007d39;
      }
    }
    if (param_1 == 0) {
      uVar7 = FUN_1002c4e7();
    }
    else {
      uVar7 = *(undefined4 *)((int)this + 0xde4);
    }
    FUN_1002c67c();
    if (*(int *)((int)this + 0xd98) != 0) {
      uVar8 = 0;
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0xd94) + uVar8 * 4);
        (**(code **)(**(int **)(iVar1 + 0xb8) + 0x34))(0,uVar7);
        uVar8 = uVar8 + 1;
        *(undefined1 *)(iVar1 + 0xd4) = 0;
      } while (uVar8 < *(uint *)((int)this + 0xd98));
    }
  }
LAB_10007d39:
  FUN_10003e89((char *)((int)&uStack_8 + 3));
  return bVar9;
}

