/*
 * FUN_10001f28 at 10001f28
 * undefined4 __thiscall FUN_10001f28(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10001f28-10001f94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10001f28(void *this,int param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0x8876086a;
  puVar1 = FUN_100035d8(this,param_1);
  uVar2 = FUN_100020ae(param_2);
  uVar2 = FUN_1000285a(*(byte **)(puVar1 + 0x144),uVar2);
  if ((char)uVar2 != '\0') {
    uVar3 = 0x8876086c;
    uVar2 = FUN_100020ae(param_3);
    uVar2 = FUN_1000285a(*(byte **)(puVar1 + 0x130),uVar2);
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_100020ae(param_4);
      uVar2 = FUN_1000285a(*(byte **)(puVar1 + 0x138),uVar2);
      if ((char)uVar2 != '\0') {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

