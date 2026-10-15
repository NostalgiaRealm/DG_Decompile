/*
 * FUN_1800bf018 at 1800bf018
 * undefined FUN_1800bf018(void)
 * Address ranges: 1800bf018-1800bf0b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf018(longlong param_1,uint param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  
  uVar2 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x5a00)) && (param_3 != (uint *)0x0)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    FUN_1800031b8(*(undefined8 *)(*(longlong *)(lVar3 + 0x50) + 0xe28),*(undefined4 *)(lVar3 + 0xe8)
                  ,&local_28);
    local_30[0] = 0;
    cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x80) + 0xa8))
                      (*(longlong **)(lVar3 + 0x80),*(undefined4 *)(lVar3 + 0x10),local_28,uStack_24
                       ,local_30);
    *param_3 = (uint)(cVar1 != '\0');
    uVar2 = 0;
    if (*(char *)(lVar3 + 0xfb) == '\0') {
      local_30[0] = 0;
    }
    param_3[1] = local_30[0];
  }
  return uVar2;
}

