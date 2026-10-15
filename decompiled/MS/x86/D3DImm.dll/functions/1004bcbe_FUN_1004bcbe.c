/*
 * FUN_1004bcbe at 1004bcbe
 * undefined4 __thiscall FUN_1004bcbe(void * this, uint param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 1004bcbe-1004bd5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1004bcbe(void *this,uint param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar4 = 0x8876080c;
    if (*(char *)((int)this + 0x134) == '\0') {
      if ((*(int *)((int)this + 0xc) == 0) && (*(int *)((int)this + 8) == 0)) {
        piVar1 = (int *)((int)this + 0x1c);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (iVar3 != 0) {
          LOCK();
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          return 0x887601ae;
        }
        *(undefined4 *)((int)this + 0xc) = *(undefined4 *)((int)this + 4);
      }
      uVar4 = 0;
      *param_2 = *(undefined4 *)((int)this + 0xc);
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)((int)this + 0x10);
      }
      *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x10);
      pbVar2 = (byte *)((int)this + 0x137);
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x130) = 0;
      if (*(char *)((int)this + 0x138) != '\0') {
        *(undefined1 *)((int)this + 0x138) = 0;
        *pbVar2 = 0;
      }
      *pbVar2 = *pbVar2 | (byte)(param_1 >> 0xc) & 1;
    }
  }
  return uVar4;
}

