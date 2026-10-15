/*
 * FUN_100071c0 at 100071c0
 * bool __thiscall FUN_100071c0(void * this, int param_1)
 * Address ranges: 100071c0-100072f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_100071c0(void *this,int param_1)

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
  FUN_10003838((void *)((int)&uStack_8 + 3),(byte)(*(uint *)((int)this + 0xb0c) >> 2) & 1);
  bVar9 = false;
  if (*(int *)((int)this + 0xb20) != 0) {
    iVar1 = **(int **)((int)this + 0xad0);
    bVar2 = FUN_1000fadf(iVar1);
    if (bVar2 == 0) {
      cVar3 = FUN_10024c06();
      if ((cVar3 == '\0') || (*(char *)(iVar1 + 0xd4) == '\0')) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
    }
    else {
      pHVar5 = GetCursor();
      pHVar6 = (HCURSOR)FUN_10024e75();
      bVar9 = pHVar5 != pHVar6;
    }
    uVar8 = 0;
    if (*(int *)((int)this + 0xad4) != 0) {
      bVar2 = 1;
      do {
        bVar4 = FUN_1000fadf(*(int *)(*(int *)((int)this + 0xad0) + uVar8 * 4));
        bVar2 = bVar2 & bVar4;
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)((int)this + 0xad4));
      if (bVar2 == 0) {
        FUN_10024e75();
        FUN_1002500a();
        uVar8 = 0;
        if (*(int *)((int)this + 0xad4) != 0) {
          do {
            FUN_1000fb6f(*(void **)(*(int *)((int)this + 0xad0) + uVar8 * 4),(uint)(param_1 != 0));
            uVar8 = uVar8 + 1;
          } while (uVar8 < *(uint *)((int)this + 0xad4));
        }
        goto LAB_100072e9;
      }
    }
    if (param_1 == 0) {
      uVar7 = FUN_10024e75();
    }
    else {
      uVar7 = *(undefined4 *)((int)this + 0xb20);
    }
    FUN_1002500a();
    if (*(int *)((int)this + 0xad4) != 0) {
      uVar8 = 0;
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0xad0) + uVar8 * 4);
        (**(code **)(**(int **)(iVar1 + 0xb8) + 0x34))(0,uVar7);
        uVar8 = uVar8 + 1;
        *(undefined1 *)(iVar1 + 0xd4) = 0;
      } while (uVar8 < *(uint *)((int)this + 0xad4));
    }
  }
LAB_100072e9:
  FUN_10003881((char *)((int)&uStack_8 + 3));
  return bVar9;
}

