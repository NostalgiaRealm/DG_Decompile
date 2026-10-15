/*
 * FUN_18003db48 at 18003db48
 * undefined8 __fastcall FUN_18003db48(longlong param_1, longlong param_2, ulonglong param_3, ulonglong param_4, undefined8 param_5, uint param_6)
 * Address ranges: 18003db48-18003dc1e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18003db48(longlong param_1,longlong param_2,ulonglong param_3,ulonglong param_4,
             undefined8 param_5,uint param_6)

{
  longlong *plVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  undefined8 local_res8 [4];
  LPVOID local_48;
  LPVOID local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_res8[0] = 0;
  local_38 = 0x100;
  local_30 = 1;
  local_48 = (LPVOID)thunk_FUN_1800fbccc(0x100);
  if (param_6 == 0x40) {
    param_4 = param_4 & 0xfffeffffffffffff;
  }
  local_40 = local_48;
  uVar3 = FUN_18006b96c((uint *)(param_1 + 0x38),(uint *)(param_1 + 0x48),param_4,
                        *(undefined1 *)(param_1 + 0x80),param_6,(longlong *)&local_48,
                        (undefined8 *)0x0);
  pvVar2 = local_48;
  if ((char)uVar3 != '\0') {
    plVar1 = *(longlong **)((param_3 & 0xffffffff) * 0x18c0 + 0x6b0 + param_2);
    (**(code **)(*plVar1 + 0x78))
              (plVar1,local_48,(longlong)local_40 - (longlong)local_48,0,local_res8);
  }
  uVar3 = local_res8[0];
  FUN_1800fbcf0(pvVar2);
  return uVar3;
}

