/*
 * FUN_180026ad4 at 180026ad4
 * ulonglong __fastcall FUN_180026ad4(longlong param_1)
 * Address ranges: 180026ad4-180026ba1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180026ad4(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint local_res8 [2];
  uint local_res10 [2];
  longlong local_res18;
  
  FUN_180047cd4(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508) + 8,
                '\0');
  lVar1 = *(longlong *)(param_1 + 0x140);
  local_res8[0] = 0xffffffff;
  local_res10[0] = 0xffffffff;
  local_res18 = 0;
  uVar2 = FUN_180030350((uint *)(param_1 + 0x428),(ulonglong)*(uint *)(lVar1 + 0xb0),
                        *(undefined4 *)(lVar1 + 0xb4),*(int *)(param_1 + 0x30),
                        *(char *)(*(longlong *)(lVar1 + 8) + 0x54),&local_res18,local_res10,
                        local_res8);
  if ((char)uVar2 == '\0') {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    FUN_1800305c0(param_1 + 0x428);
    *(longlong *)(param_1 + 0x520) = local_res18;
    *(uint *)(param_1 + 0x52c) = local_res8[0];
    *(uint *)(param_1 + 0x528) = local_res10[0];
    uVar2 = CONCAT71((uint7)(uint3)(local_res10[0] >> 8),1);
  }
  return uVar2;
}

