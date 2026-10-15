/*
 * FUN_1000209d at 1000209d
 * undefined4 __thiscall FUN_1000209d(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 1000209d-10002109
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1000209d(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086a;
  puVar1 = FUN_100031b7(this,param_1);
  uVar2 = FUN_10002220(param_2);
  uVar2 = FUN_10002709(*(byte **)(puVar1 + 0xe8),uVar2);
  if ((char)uVar2 != '\0') {
    uVar3 = 0x8876086c;
    uVar2 = FUN_10002220(param_3);
    uVar2 = FUN_10002709(*(byte **)(puVar1 + 0xd4),uVar2);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_10002220(param_4);
      uVar2 = FUN_10002709(*(byte **)(puVar1 + 0xdc),uVar2);
      if ((char)uVar2 != '\0') {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

