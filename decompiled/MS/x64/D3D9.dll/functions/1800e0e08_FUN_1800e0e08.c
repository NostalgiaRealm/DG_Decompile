/*
 * FUN_1800e0e08 at 1800e0e08
 * undefined __fastcall FUN_1800e0e08(longlong param_1, longlong param_2, longlong param_3, undefined8 * param_4)
 * Address ranges: 1800e0e08-1800e0fa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1800e0e08(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  longlong *local_res8;
  undefined1 local_4068 [4];
  undefined4 local_4064;
  undefined4 local_4060;
  undefined4 local_405c;
  undefined1 local_4058 [4112];
  undefined1 local_3048 [24];
  undefined1 local_3030 [12304];
  undefined8 uStack_20;
  
  uStack_20 = 0x1800e0e28;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  uVar4 = 0;
  *(undefined1 *)(param_2 + 0xd69) = 1;
  do {
    *(undefined4 *)(param_2 + 0x40 + uVar4 * 0xc) = *(undefined4 *)(param_3 + uVar4 * 0xc);
    *(undefined4 *)(param_2 + 0x44 + uVar4 * 0xc) = *(undefined4 *)(param_3 + 4 + uVar4 * 0xc);
    *(undefined4 *)(param_2 + 0x48 + uVar4 * 0xc) = *(undefined4 *)(param_3 + 8 + uVar4 * 0xc);
    fVar6 = (float)uVar4 / 255.0;
    fVar5 = *(float *)(param_3 + uVar4 * 0xc) - fVar6;
    if (fVar5 < 0.0) {
      fVar5 = -fVar5;
    }
    if (0.003921569 <= fVar5) {
LAB_1800e0ed5:
      bVar2 = 0;
    }
    else {
      fVar5 = *(float *)(param_3 + 4 + uVar4 * 0xc) - fVar6;
      if (fVar5 < 0.0) {
        fVar5 = -fVar5;
      }
      if (0.003921569 <= fVar5) goto LAB_1800e0ed5;
      fVar6 = *(float *)(param_3 + 8 + uVar4 * 0xc) - fVar6;
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
      }
      if (0.003921569 <= fVar6) goto LAB_1800e0ed5;
      bVar2 = 1;
    }
    *(byte *)(param_2 + 0xd69) = *(byte *)(param_2 + 0xd69) & bVar2;
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    if (0xff < uVar3) {
      local_res8 = (longlong *)0x0;
      (**(code **)(**(longlong **)(param_2 + 8) + 0x78))(*(longlong **)(param_2 + 8),&local_res8);
      if (local_res8 != (longlong *)0x0) {
        if ((*(char *)(param_2 + 0xd68) == '\0') &&
           (iVar1 = (**(code **)(*local_res8 + 0x68))(local_res8,local_4068), iVar1 == 0)) {
          (**(code **)*param_4)
                    (param_4,local_405c,local_4058,local_3030,param_3,local_4060,local_4064);
          (**(code **)(*local_res8 + 0x70))(local_res8,local_3048);
        }
        (**(code **)(*local_res8 + 0x10))();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
      return;
    }
  } while( true );
}

