/*
 * FUN_1800a85d0 at 1800a85d0
 * undefined FUN_1800a85d0(void)
 * Address ranges: 1800a85d0-1800a8697
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a85d0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + 0x98;
  }
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x18) + -0x6838;
  }
  lVar2 = FUN_1800a3108(lVar1,lVar2,param_1,0,param_4,param_3,param_2,
                        *(undefined4 *)(param_1 + 0x78),*(undefined1 *)(param_1 + 0x88),param_5,
                        *(int *)(param_1 + 0x74) == 0x14,*(undefined8 *)(param_1 + 0x50),
                        *(undefined8 *)(param_1 + 0x58),param_6);
  *(longlong *)(param_1 + (ulonglong)(uint)(param_3 + param_2 * 0x10) * 8 + 0xb0) = lVar2;
  if ((lVar2 != 0) && (uVar3 = FUN_18000b708(lVar2,0), (uVar3 & 1) != 0)) {
    FUN_1800015a0(lVar2 + 0xac);
  }
  return lVar2 != 0;
}

