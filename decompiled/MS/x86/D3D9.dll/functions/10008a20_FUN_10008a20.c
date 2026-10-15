/*
 * FUN_10008a20 at 10008a20
 * undefined __thiscall FUN_10008a20(void * this, uint param_1, char param_2)
 * Address ranges: 10008a20-10008a5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10008a20(void *this,uint param_1,char param_2)

{
  byte *pbVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  bVar3 = param_1 == 0;
  if (!bVar3) {
    for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  while (!bVar3) {
    pbVar1 = (byte *)((int)&param_1 + ((int)uVar2 >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << (uVar2 & 7));
    *(undefined1 *)(*(int *)((int)this + (uVar2 & 0xff) * 4 + 26000) + 0x62) = 0;
    uVar2 = 0;
    bVar3 = param_1 == 0;
    if (!bVar3) {
      for (; (param_1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
  }
  if (param_2 != '\0') {
    *(undefined1 *)(*(int *)((int)this + 0x658c) + 0x4a) = 0;
  }
  return;
}

