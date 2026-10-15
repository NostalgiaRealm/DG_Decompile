/*
 * FUN_10015cd0 at 10015cd0
 * undefined FUN_10015cd0(void)
 * Address ranges: 10015cd0-10015de7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10015cd0(void)

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
  
  uVar2 = DAT_100aaa5c;
  local_38 = 0;
  local_2c = 0;
  local_30 = DAT_100aaa5c;
  local_40 = 3;
  puStack_3c = PTR_FUN_100a814c;
  local_24 = (*(code *)__hybrid_CompilerIAT)(4);
  local_1c = u_DGVOODOO_1009fb80;
  uStack_20 = 0;
  (*(code *)PTR_FUN_100a81d4)(&local_40);
  uVar1 = (*(code *)PTR_FUN_100a8148)
                    (0x40000,0x1009fbb8,0x1009fb98,0x10cf0000,0x80000000,0x80000000,100,100,0);
  uVar2 = (*(code *)PTR_FUN_100a81ac)(uVar2,0x65,1,0,0,0x8040);
  (*(code *)PTR_FUN_100a81dc)(uVar1,0x80,1,uVar2);
  (*(code *)PTR_FUN_100a81dc)(uVar1,0x80,0,uVar2);
  return uVar1;
}

