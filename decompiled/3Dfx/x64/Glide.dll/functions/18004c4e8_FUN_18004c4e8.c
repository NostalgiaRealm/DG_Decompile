/*
 * FUN_18004c4e8 at 18004c4e8
 * undefined8 __fastcall FUN_18004c4e8(longlong param_1, longlong param_2, uint param_3)
 * Address ranges: 18004c4e8-18004c599
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18004c4e8(longlong param_1,longlong param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  puVar1 = (undefined8 *)(param_2 + 0xd78);
  uVar5 = (**(code **)(**(longlong **)(param_2 + 8) + 0x48))
                    (*(longlong **)(param_2 + 8),0,&DAT_180064608,puVar1);
  if (-1 < (int)uVar5) {
    local_44 = 4;
    local_48 = *(undefined4 *)(&DAT_180061210 + (longlong)*(int *)(param_2 + 0x34) * 4);
    local_3c = 0;
    plVar3 = *(longlong **)((ulonglong)uVar2 * 0x18c0 + 0x6b0 + param_1);
    iVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,*puVar1,&local_48,param_2 + 0xd80);
    if (-1 < iVar4) {
      uVar6 = FUN_18004b330(param_1,param_2,param_3);
      return CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    uVar5 = (**(code **)(*(longlong *)*puVar1 + 0x10))();
    *puVar1 = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

