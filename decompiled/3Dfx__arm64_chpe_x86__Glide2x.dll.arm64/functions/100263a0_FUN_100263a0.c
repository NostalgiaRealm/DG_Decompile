/*
 * FUN_100263a0 at 100263a0
 * undefined FUN_100263a0(void)
 * Address ranges: 100263a0-100264b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100263a0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined *puStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  wchar16 *local_1c;
  
  uVar2 = DAT_1009f7ac;
  local_38 = 0;
  local_2c = 0;
  local_30 = DAT_1009f7ac;
  local_40 = 3;
  puStack_3c = PTR_FUN_1009d148;
  local_24 = (*(code *)__hybrid_CompilerIAT)(4);
  local_1c = u_DGVOODOO_100969f8;
  uStack_20 = 0;
  (*(code *)PTR_FUN_1009d1d0)(&local_40);
  uVar1 = (*(code *)PTR_FUN_1009d144)
                    (0x40000,0x10096a30,0x10096a10,0x10cf0000,0x80000000,0x80000000,100,100,0);
  uVar2 = (*(code *)PTR_FUN_1009d1a8)(uVar2,0x65,1,0,0,0x8040);
  (*(code *)PTR_FUN_1009d1d8)(uVar1,0x80,1,uVar2);
  (*(code *)PTR_FUN_1009d1d8)(uVar1,0x80,0,uVar2);
  return uVar1;
}

