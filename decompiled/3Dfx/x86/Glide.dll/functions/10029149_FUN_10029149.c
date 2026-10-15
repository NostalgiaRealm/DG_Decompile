/*
 * FUN_10029149 at 10029149
 * undefined4 __fastcall FUN_10029149(void * param_1)
 * Address ranges: 10029149-10029270
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10029149(void *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  uint3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  uint3 extraout_var_00;
  uint3 uVar6;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0x38) = 0;
  *(undefined4 *)((int)param_1 + 0x5c) = 0;
  bVar3 = FUN_100414f5(*(void **)(*(int *)((int)param_1 + 0x3c) + 0x3180),
                       *(int *)(*(int *)((int)param_1 + 0x3c) + 0x3184),DAT_1005974c,1,0x100592b0,
                       0x100592b4,(int *)((int)param_1 + 0x4c),(int)param_1 + 0x50);
  uVar6 = extraout_var;
  if (bVar3) {
    local_1c = 0xf0000;
    local_18 = 2;
    *(undefined4 *)((int)param_1 + 0x40) = 0;
    local_14 = 1;
    local_10 = 0x10000;
    local_c = 0;
    *(undefined4 *)((int)param_1 + 0x44) = 0;
    local_8 = 0x3c;
    *(undefined4 *)((int)param_1 + 0x48) = 0;
    puVar1 = (undefined4 *)((int)param_1 + 0x54);
    piVar2 = (int *)**(undefined4 **)(*(int *)((int)param_1 + 0x3c) + 0x3188);
    iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_1c,0,puVar1);
    uVar5 = extraout_ECX;
    if (-1 < iVar4) {
      local_30 = 2;
      local_2c = 2;
      local_34 = 0x10000;
      local_28 = 0x10000;
      local_24 = 0;
      local_20 = 4;
      piVar2 = (int *)**(undefined4 **)(*(int *)((int)param_1 + 0x3c) + 0x3188);
      iVar4 = (**(code **)(*piVar2 + 0xc))(piVar2,&local_34,0,(int)param_1 + 0x58);
      if (-1 < iVar4) {
        uVar5 = *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x3188);
        *(undefined4 *)((int)param_1 + 0x68) =
             *(undefined4 *)(*(int *)((int)param_1 + 0x3c) + 0x3180);
        *(undefined4 *)((int)param_1 + 0x6c) = uVar5;
        *(undefined1 *)((int)param_1 + 100) = 1;
        uVar5 = FUN_1002b980(param_1,1,1);
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
      (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
      *puVar1 = 0;
      uVar5 = extraout_ECX_00;
    }
    FUN_10041606(uVar5,1,(int)param_1 + 0x4c,(int)param_1 + 0x50);
    uVar6 = extraout_var_00;
  }
  return (uint)uVar6 << 8;
}

