/*
 * FUN_10054904 at 10054904
 * undefined4 * __stdcall FUN_10054904(undefined4 * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 10054904-100549c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * FUN_10054904(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  uint uStack00000010;
  char local_485c [18516];
  undefined4 uStack_8;
  
  uStack_8 = 0x10054911;
  FUN_100adac0((undefined4 *)local_485c,param_2,0x4858);
  bVar5 = (param_3 & 0x400) != 0;
  uStack00000010 = (uint)bVar5;
  uVar2 = 0xffffffff;
  uVar1 = 0;
  uVar3 = 0xffffffff;
  do {
    uVar4 = uVar3;
    if (((local_485c[uVar1 + 0x10] != '\0') && (uVar4 = uVar1, local_485c[uVar1] != '\0')) &&
       (uVar4 = uVar3, local_485c[uVar1] == '0')) {
      uVar2 = uVar1;
    }
    uVar1 = uVar1 + 1;
    uVar3 = uVar4;
  } while (uVar1 < 0x10);
  if (uVar2 != 0xffffffff) {
    if ((uVar4 != 0xffffffff) && ((param_3 & 0x200) != 0)) {
      local_485c[uVar4 + 0x10] = '\a';
    }
    if (bVar5) {
      local_485c[uVar2 + 0x10] = '\a';
    }
  }
  FUN_100adac0(param_1,(undefined4 *)local_485c,0x4858);
  return param_1;
}

