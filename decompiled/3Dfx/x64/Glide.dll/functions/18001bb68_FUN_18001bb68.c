/*
 * FUN_18001bb68 at 18001bb68
 * undefined8 __fastcall FUN_18001bb68(longlong param_1)
 * Address ranges: 18001bb68-18001bc1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001bb68(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint local_58 [10];
  undefined8 local_30;
  
  uVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x33) * *(int *)(*(longlong *)(param_1 + 8) + 0x2f);
  puVar1 = (undefined8 *)(param_1 + 0x3208);
  local_58[1] = 0;
  local_58[2] = 8;
  local_58[3] = 0;
  local_58[4] = 0x40;
  local_58[5] = 4;
  local_58[0] = uVar4;
  uVar2 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x18))
                    ((longlong *)**(undefined8 **)(param_1 + 0x31c0),local_58,0,puVar1);
  if (-1 < (int)uVar2) {
    local_58[6] = 0;
    local_30 = 0;
    local_58[7] = 1;
    local_58[8] = 0;
    local_58[9] = uVar4 >> 2;
    uVar3 = (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x31c0) + 0x38))
                      ((longlong *)**(undefined8 **)(param_1 + 0x31c0),*puVar1,local_58 + 6,
                       param_1 + 0x3210);
    if (-1 < (int)uVar3) {
      return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    uVar2 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
  }
  return uVar2 & 0xffffffffffffff00;
}

