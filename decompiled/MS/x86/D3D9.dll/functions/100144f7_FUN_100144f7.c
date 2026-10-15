/*
 * FUN_100144f7 at 100144f7
 * undefined __thiscall FUN_100144f7(void * this, int param_1)
 * Address ranges: 100144f7-10014560
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100144f7(void *this,int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = FUN_100143dc(this,param_1);
  if (((char)uVar2 == '\0') && (uVar5 = 0, *(int *)((int)this + 100) != 0)) {
    do {
      uVar4 = 0;
      while( true ) {
        uVar3 = (uint)*(ushort *)((int)this + 0x30);
        if ((*(uint *)((int)this + 0x54) & 0x400) != 0) {
          uVar3 = 1;
        }
        if (uVar3 <= uVar4) break;
        pvVar1 = *(void **)(*(int *)(uVar5 * 0x40 + param_1 + uVar4 * 4) + 4);
        FUN_1002dfa1(pvVar1);
        FUN_1002d836((undefined4 *)((int)pvVar1 + 0x4c));
        uVar4 = uVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 100));
  }
  *(undefined1 *)((int)this + 0x32) = 0;
  return;
}

