/*
 * FUN_1003e261 at 1003e261
 * undefined __thiscall FUN_1003e261(void * this, uint param_1)
 * Address ranges: 1003e261-1003e2c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1003e261(void *this,uint param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  FUN_10006358((int)this);
  cVar4 = (char)param_1;
  if (cVar4 != *(char *)((int)this + 0xa85)) {
    (**(code **)(**(int **)((int)this + 0x14) + 0x90))(param_1);
    *(char *)((int)this + 0xa85) = cVar4;
  }
  param_1 = *(uint *)((int)this + 0x938);
  uVar3 = 0;
  bVar5 = param_1 == 0;
  if (!bVar5) {
    for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  while (!bVar5) {
    pbVar2 = (byte *)((int)&param_1 + ((int)uVar3 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar3 & 7));
    puVar1 = *(undefined4 **)((int)this + (uVar3 & 0xff) * 4 + 0x14d4);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)();
    }
    uVar3 = 0;
    bVar5 = param_1 == 0;
    if (!bVar5) {
      for (; (param_1 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
  }
  *(undefined4 *)((int)this + 0x938) = 0;
  return;
}

