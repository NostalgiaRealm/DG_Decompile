/*
 * FUN_180033d48 at 180033d48
 * undefined8 * __fastcall FUN_180033d48(longlong param_1, int param_2)
 * Address ranges: 180033d48-180033dc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180033d48(longlong param_1,int param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_1800fbccc(0x28);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 600);
    uVar2 = *(undefined8 *)(param_1 + 0x250);
    *puVar4 = &PTR_FUN_180101c18;
    puVar4[1] = uVar2;
    *(undefined4 *)(puVar4 + 2) = uVar1;
    uVar3 = FUN_18003cb88((longlong)puVar4,param_2);
    if ((char)uVar3 != '\0') {
      return puVar4;
    }
    FUN_18003cb38(puVar4);
    FUN_1800fbcf0(puVar4);
  }
  return (undefined8 *)0x0;
}

