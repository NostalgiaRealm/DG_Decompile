/*
 * FUN_100ab8ab at 100ab8ab
 * undefined1 __thiscall FUN_100ab8ab(void * this, int param_1, uint param_2)
 * Address ranges: 100ab8ab-100ab94e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100ab8ab(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 uVar7;
  bool bVar8;
  
  uVar2 = FUN_100aba70(this,(undefined4 *)(*(int *)((int)this + 0x34) + param_1),param_2);
  uVar7 = uVar2 != 0xffffffff;
  if ((bool)uVar7) {
    iVar5 = *(int *)((int)this + 0x54) * 0x1c;
    uVar6 = 0;
    iVar1 = *(int *)(*(int *)((int)this + 0x5c) + 4 + *(int *)((int)this + 0x50) * 0x10);
    iVar3 = *(int *)(iVar1 + 8 + iVar5);
    bVar8 = iVar3 == 0;
    if (iVar3 != 0) {
      do {
        iVar3 = FUN_100d03d3((byte *)(*(int *)(*(int *)(iVar1 + 4 + iVar5) + uVar6 * 4) +
                                     *(int *)((int)this + 0x44)),
                             (byte *)(uVar2 + *(int *)((int)this + 0x44)));
        if (iVar3 == 0) {
          *(uint *)((int)this + 0x4c) = (*(int *)((int)this + 0x4c) - param_2) + -1;
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(iVar1 + 8 + iVar5));
      bVar8 = uVar6 == *(uint *)(iVar1 + 8 + iVar5);
    }
    if (bVar8) {
      param_2 = uVar2;
      uVar4 = FUN_10003d8f((void *)(iVar5 + 4 + iVar1),&param_2);
      uVar7 = (undefined1)uVar4;
    }
  }
  return uVar7;
}

