/*
 * FUN_18003cf04 at 18003cf04
 * undefined8 __fastcall FUN_18003cf04(longlong param_1, longlong * param_2)
 * Address ranges: 18003cf04-18003d1c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_18003cf04(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 local_res8;
  LPVOID local_fb8;
  LPVOID local_fb0;
  undefined8 local_fa8;
  undefined1 local_fa0;
  undefined4 local_f98;
  undefined4 local_f94;
  undefined4 uStack_f90;
  undefined4 uStack_f8c;
  undefined4 uStack_f88;
  undefined4 uStack_f84;
  undefined4 uStack_f80;
  undefined4 uStack_f7c;
  undefined4 uStack_f78;
  undefined1 local_f68 [72];
  ulonglong local_f20;
  undefined1 *local_f18;
  undefined8 local_f10;
  undefined8 local_f08;
  undefined8 uStack_f00;
  undefined4 local_ef8 [12];
  undefined1 *local_ec8;
  undefined2 local_ec0;
  undefined1 local_eb8 [22];
  undefined1 local_ea2 [66];
  undefined4 local_e60;
  undefined4 local_e5c;
  undefined4 local_e58;
  undefined4 local_e48;
  undefined4 local_e44;
  undefined4 local_e40;
  undefined4 local_e3c;
  undefined4 local_e38;
  undefined1 *local_d68;
  undefined1 local_d4d;
  undefined1 local_a88 [608];
  undefined1 local_828 [2048];
  
  lVar2 = *param_2;
  uVar6 = FUN_180064018(param_1,lVar2,(longlong)local_828,*(char *)((longlong)param_2 + 0xc));
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar11 = (ulonglong)*(uint *)(param_1 + 0x18) * 0x18c0;
  local_res8 = 0;
  if (*(int *)(lVar2 + 4) == 0) {
    plVar4 = *(longlong **)(lVar11 + 0x6b0 + lVar3);
    (**(code **)(*plVar4 + 0x58))
              (plVar4,local_828,uVar6 & 0xffffffff,
               *(undefined8 *)
                (*(longlong *)(param_1 + 0x20) + (ulonglong)*(uint *)(param_2 + 1) * 8),
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x28) + (ulonglong)*(uint *)(param_2 + 1) * 4),&local_res8)
    ;
  }
  else {
    uVar10 = 0;
    if (*(int *)(lVar2 + 8) != 0) {
      uVar9 = 0;
      do {
        bVar1 = *(byte *)(lVar2 + 0x214 + uVar9);
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar10 | (ulonglong)*(byte *)(lVar2 + 0x1a + (ulonglong)bVar1 * 8) <<
                          ((bVar1 & 0xf) << 2);
      } while (uVar8 < *(uint *)(lVar2 + 8));
    }
    local_fa0 = 1;
    local_fa8 = 0x200;
    local_fb8 = (LPVOID)thunk_FUN_1800fbccc(0x200);
    local_f18 = local_a88;
    uStack_f80 = 0;
    uStack_f7c = 0;
    uStack_f90 = 0;
    uStack_f8c = 0;
    uStack_f88 = 0;
    uStack_f84 = 0;
    local_f08 = 0;
    uStack_f00 = 0;
    local_f10 = 0;
    local_fb0 = local_fb8;
    FUN_1800fbea0(local_eb8,0,0x430);
    uVar9 = 0;
    do {
      (&DAT_180111f70)[uVar9] =
           (&DAT_180102600)[uVar9 >> 4] << 0xc | (&DAT_180102600)[(uint)uVar9 & 0xf];
      uVar8 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while (uVar8 < 0x100);
    local_f20 = uVar10;
    FUN_1800fbea0((undefined1 *)&local_e48,0,0x100);
    local_d4d = 1;
    local_d68 = local_f68;
    puVar7 = local_ef8;
    FUN_1800fbea0((undefined1 *)puVar7,0,0x40);
    local_ec8 = local_ea2;
    local_ef8[0] = 0x10040;
    local_ec0 = 0x40;
    local_e3c = 0x110800;
    local_e40 = 0x210800;
    local_e44 = 0x310800;
    local_e48 = 0x410800;
    local_e38 = 0x410802;
    local_e60 = 0x110400;
    local_e5c = 0x410400;
    local_e58 = 0x20000d00;
    FUN_18007e050(puVar7,(longlong)&local_f18);
    local_f98 = 0x43425844;
    uStack_f84 = 1;
    uStack_f80 = 0;
    uStack_f7c = 1;
    uStack_f78 = 0;
    local_f94 = 0;
    uStack_f90 = 0;
    uStack_f8c = 0;
    uStack_f88 = 0;
    FUN_1800edd90((longlong *)&local_fb8,(undefined8 *)&local_f98,0x24);
    *(int *)((longlong)local_fb8 + 0x20) = (int)local_fb0 - (int)local_fb8;
    FUN_18007e390((ulonglong)(uint)((int)local_fb0 - (int)local_fb8),(longlong *)&local_fb8,
                  (longlong)&local_f18,'\0');
    FUN_1800edec4((longlong *)&local_fb8);
    pvVar5 = local_fb8;
    plVar4 = *(longlong **)(lVar11 + 0x6b0 + lVar3);
    (**(code **)(*plVar4 + 0x58))
              (plVar4,local_828,uVar6 & 0xffffffff,local_fb8,
               (longlong)local_fb0 - (longlong)local_fb8,&local_res8);
    FUN_1800fbcf0(pvVar5);
  }
  return local_res8;
}

