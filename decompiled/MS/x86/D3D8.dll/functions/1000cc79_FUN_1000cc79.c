/*
 * FUN_1000cc79 at 1000cc79
 * undefined4 * __fastcall FUN_1000cc79(int param_1)
 * Address ranges: 1000cc79-1000ccda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1000cc79(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  SIZE_T dwSize;
  undefined4 *local_10;
  int local_c;
  
  FUN_1000191b(&local_10,0x100);
  uVar1 = FUN_1000ca0a(param_1,(int *)&local_10);
  puVar3 = (undefined4 *)0x0;
  if ((char)uVar1 != '\0') {
    dwSize = local_c - (int)local_10;
    puVar2 = VirtualAlloc((LPVOID)0x0,dwSize,0x1000,0x40);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_100adac0(puVar2,local_10,dwSize);
      puVar3 = puVar2;
    }
  }
  thunk_FUN_100ad48c(local_10);
  return puVar3;
}

