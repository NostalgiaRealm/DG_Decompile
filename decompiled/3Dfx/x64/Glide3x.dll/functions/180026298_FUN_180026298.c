/*
 * FUN_180026298 at 180026298
 * bool __fastcall FUN_180026298(longlong param_1)
 * Address ranges: 180026298-180026366
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180026298(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0;
  uStack_10 = 0;
  FUN_18004fa04(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3330),
                (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x140) + 0x3338),2,(longlong)&local_18,
                0);
  lVar1 = *(longlong *)(param_1 + 0x140);
  local_res8 = 0;
  local_res10 = 0;
  uVar2 = FUN_1800297a4(param_1 + 0x448,*(undefined4 *)(lVar1 + 0xb0),*(undefined4 *)(lVar1 + 0xb4),
                        *(undefined4 *)(param_1 + 0x30),*(byte *)(*(longlong *)(lVar1 + 8) + 0x54),
                        &local_res8,&local_res10);
  bVar3 = (char)uVar2 != '\0';
  if (bVar3) {
    FUN_180029890(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x5a8) = local_res8;
    *(undefined8 *)(param_1 + 0x5b0) = local_res10;
  }
  return bVar3;
}

