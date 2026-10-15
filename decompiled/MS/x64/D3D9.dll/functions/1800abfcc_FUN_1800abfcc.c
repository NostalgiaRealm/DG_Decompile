/*
 * FUN_1800abfcc at 1800abfcc
 * undefined1 __fastcall FUN_1800abfcc(longlong param_1, longlong param_2)
 * Address ranges: 1800abfcc-1800ac062
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1800abfcc(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  uVar4 = 0;
  lVar2 = param_1;
  puVar1 = FUN_1800aaccc(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = FUN_1800e06fc(*(longlong *)(lVar2 + 0x20),*(longlong *)*puVar1);
    if ((lVar2 == 0) || (lVar2 == param_1)) {
      uVar3 = FUN_1800e07c4(*(LPCRITICAL_SECTION *)(param_1 + 0x20),(undefined8 *)*puVar1,0,0);
      uVar4 = (undefined1)uVar3;
      FUN_1800aadd0(param_1,(ulonglong)*(uint *)((longlong)puVar1 + 0x1c),0);
      FUN_1800fbec0((undefined8 *)
                    ((ulonglong)*(uint *)((longlong)puVar1 + 0x1c) * 0xc18 + 0x100c0 + param_1),
                    (undefined8 *)(param_1 + 0x1c240),0xc00);
    }
  }
  return uVar4;
}

