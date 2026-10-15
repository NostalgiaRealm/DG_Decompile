/*
 * FUN_1000896c at 1000896c
 * byte __thiscall FUN_1000896c(void * this, int param_1, int param_2)
 * Address ranges: 1000896c-10008a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_1000896c(void *this,int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0;
  bVar2 = 1;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      uVar6 = (uint)*(byte *)(param_1 + 0x214 + uVar5);
      iVar1 = (int)*(char *)(param_1 + 0x14 + uVar6 * 8);
      if (uVar6 < 0x11) {
        cVar3 = (&DAT_100d5f8c)[uVar6];
      }
      else {
        cVar3 = -1;
      }
      bVar2 = bVar2 | uVar6 == 0;
      if (cVar3 == *(char *)(param_1 + 0x19 + uVar6 * 8)) {
        iVar4 = uVar6 * 0xc;
        *(uint *)(param_2 + iVar4) =
             *(int *)(*(int *)((int)this + iVar1 * 4 + 26000) + 4) +
             (uint)*(byte *)(param_1 + 0x17 + uVar6 * 8) * 4 +
             *(int *)((int)this + iVar1 * 4 + 0x6610);
        *(undefined1 *)(param_2 + 8 + iVar4) = *(undefined1 *)(param_1 + 0x18 + uVar6 * 8);
        *(undefined1 *)(param_2 + 9 + iVar4) = *(undefined1 *)(param_1 + 0x15 + uVar6 * 8);
        *(undefined4 *)(param_2 + 4 + iVar4) = *(undefined4 *)((int)this + iVar1 * 4 + 0x65d0);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  return bVar2;
}

