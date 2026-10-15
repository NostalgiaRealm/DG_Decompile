/*
 * FUN_180021c74 at 180021c74
 * undefined8 __fastcall FUN_180021c74(longlong param_1)
 * Address ranges: 180021c74-180021cc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180021c74(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0x3180) + 0x18);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (ulonglong)(*(uint *)(param_1 + 0xac) + 1) *
                 ((local_res8[0].QuadPart - *(longlong *)(*(longlong *)(param_1 + 0x3180) + 0x20)) %
                 (longlong)uVar1);
  return CONCAT71(SUB167(auVar3 / auVar2,1),
                  SUB168(auVar3 / auVar2,0) == (ulonglong)*(uint *)(param_1 + 0xac));
}

