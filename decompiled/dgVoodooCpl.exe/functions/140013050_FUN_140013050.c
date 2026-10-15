/*
 * FUN_140013050 at 140013050
 * undefined8 * __fastcall FUN_140013050(void)
 * Address ranges: 140013050-1400130a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_140013050(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = FUN_14002423c(0x5f8);
  puVar3 = (undefined8 *)(lVar2 + 0x47U & 0xffffffffffffffc0);
  puVar3[-1] = lVar2;
  puVar3 = FUN_1400130b0(puVar3);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = FUN_140013450((longlong)puVar3);
    if ((char)uVar1 != '\0') {
      return puVar3;
    }
    (**(code **)*puVar3)(puVar3,0);
    FUN_140024c8c((LPVOID)puVar3[-1]);
  }
  return (undefined8 *)0x0;
}

