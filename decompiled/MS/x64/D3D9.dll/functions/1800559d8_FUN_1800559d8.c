/*
 * FUN_1800559d8 at 1800559d8
 * uint __fastcall FUN_1800559d8(longlong param_1, longlong param_2, int param_3, int param_4)
 * Address ranges: 1800559d8-180055a88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800559d8(longlong param_1,longlong param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined7 extraout_var;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  longlong local_res8 [4];
  
  sVar2 = (*(char *)(param_1 + 0x5c) != '\0') + 1;
  uVar4 = param_4 << sVar2;
  uVar3 = 0xffffffff;
  if (uVar4 <= *(uint *)(param_1 + 0x2c)) {
    uVar3 = *(int *)(param_1 + 0x58) + uVar4;
    if (*(uint *)(param_1 + 0x2c) < uVar3) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    local_res8[0] = 0;
    bVar1 = FUN_180041034(param_1 + 8,*(uint *)(param_1 + 0x2c) < uVar3,'\x01',local_res8);
    uVar3 = 0xffffffff;
    if ((int)CONCAT71(extraout_var,bVar1) == 0) {
      FUN_1800fbec0((undefined8 *)((ulonglong)*(uint *)(param_1 + 0x58) + local_res8[0]),
                    (undefined8 *)((ulonglong)(uint)(param_3 << sVar2) + param_2),(ulonglong)uVar4);
      (**(code **)(*(longlong *)
                    (*(longlong *)
                      (*(longlong *)(param_1 + 0x40) + (ulonglong)*(uint *)(param_1 + 0x54) * 0x10)
                    + 0x40) + 0x28))();
      uVar3 = *(uint *)(param_1 + 0x58) >> sVar2;
      *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) + uVar4;
    }
  }
  return uVar3;
}

