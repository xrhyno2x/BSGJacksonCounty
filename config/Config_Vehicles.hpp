class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: SCALAR (Rental Price)
    *        2: ARRAY (license required)
    *            Ex: { "driver", "trucking", "rebel" }
    *        3: ARRAY (This is for limiting items to certain things)
    *            0: Variable to read from
    *            1: Variable Value Type (SCALAR / BOOL /EQUAL)
    *            2: What to compare to (-1 = Check Disabled)
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        vehicles[] = {

			{ "critgamin_smart_civ",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_bleu",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_noir",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_bleufonce",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_rouge",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_jaune",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_rose",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_grise",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_violet",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_orange",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_smart_vert",18000, { "driver" }, { "", "", -1 } },

			{ "critgamin_contown_civ",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_bleu",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_noir",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_bleufonce",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_rouge",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_jaune",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_rose",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_grise",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_violet",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_jaune",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_orange",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_contown_vert",18000, { "driver" }, { "", "", -1 } },

			{ "critgamin_vangmcc_civ_noir",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_bleufonce",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_bleu",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_vert",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_rouge",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_jaune",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_rose",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_grise",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_violet",18000, { "driver" }, { "", "", -1 } },
			{ "critgamin_vangmcc_civ_orange",18000, { "driver" }, { "", "", -1 } },

			{ "cg_mercedes_sprint_van_noir",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_violet",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_rose",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_orange",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_grise",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_vert",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_bleufonce",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_bleu",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_white",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_jaune",25000, { "driver" }, { "", "", -1 } },
			{ "cg_mercedes_sprint_van_rouge",25000, { "driver" }, { "", "", -1 } },

			{ "cg_citroen_c4_noir",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_violet",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_rose",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_orange",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_grise",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_vert",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_bleufonce",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_bleu",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_white",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_jaune",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_c4_rouge",49000, { "driver" }, { "", "", -1 } },

			{ "cg_renault_twingo_noir",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_violet",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_rose",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_orange",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_grise",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_vert",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_bleufonce",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_bleu",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_white",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_jaune",49000, { "driver" }, { "", "", -1 } },
			{ "cg_renault_twingo_rouge",49000, { "driver" }, { "", "", -1 } },

			{ "cg_citroen_ds3_noir",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_violet",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_rose",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_orange",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_grise",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_vert",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_bleufonce",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_bleu",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_white",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_jaune",49000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds3_rouge",49000, { "driver" }, { "", "", -1 } },

			{ "cg_citroen_ds4_noir",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_violet",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_rose",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_orange",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_grise",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_vert",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_bleufonce",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_bleu",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_white",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_jaune",59000, { "driver" }, { "", "", -1 } },
			{ "cg_citroen_ds4_rouge",59000, { "driver" }, { "", "", -1 } },

			{ "cg_peugeot_308_gti_civ_noir",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_violet",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_rose",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_orange",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_grise",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_vert",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_bleufonce",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_bleu",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_white",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_jaune",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_gti_civ_rouge",59000, { "driver" }, { "", "", -1 } },

			{ "cg_peugeot_308_rcz_noir",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_violet",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_rose",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_orange",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_grise",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_vert",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_bleufonce",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_bleu",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_white",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_jaune",59000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_308_rcz_rouge",59000, { "driver" }, { "", "", -1 } },

			{ "Mrshounka_Alfa_Romeo_bleufonce",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_grise",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_jaune",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_noir",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_orange",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_rose",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_rouge",85000, { "driver" }, { "", "", -1 } },
			{ "Mrshounka_Alfa_Romeo_violet",85000, { "driver" }, { "", "", -1 } },

			{ "S_Rangerover_Black",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Red",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Blue",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Green",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Purple",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Grey",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_Orange",85000, { "driver" }, { "", "", -1 } },
			{ "S_Rangerover_White",85000, { "driver" }, { "", "", -1 } },

			{ "cg_peugeot_508_civ_noir",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_violet",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_rose",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_orange",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_grise",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_vert",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_bleufonce",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_bleu",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_white",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_jaune",159000, { "driver" }, { "", "", -1 } },
			{ "cg_peugeot_508_civ_rouge",159000, { "driver" }, { "", "", -1 } }
        };
    };

	class sports {
        side = "civ";
        vehicles[] = {
      { "IVORY_PRIUS", 125000, { "driver" }, { "", "", -1 } },
			{ "ivory_supra", 150000, { "driver" }, { "", "", -1 } },
			{ "ivory_supra_tuned", 1000000, { "driver" }, { "", "", -1 } },
			{ "ivory_isf", 200000, { "driver" }, { "", "", -1 } },
			{ "ivory_m3", 250000, { "driver" }, { "", "", -1 } },
			{ "ivory_m3_gts", 550000, { "driver" }, { "", "", -1 } },
			{ "ivory_gt500", 800000, { "driver" }, { "", "", -1 } },
			{ "ivory_wrx", 900000, { "driver" }, { "", "", -1 } },
			{ "ivory_lp560", 2130000, { "driver" }, { "", "", -1 } },
			{ "IVORY_R8", 830000, { "driver" }, { "", "", -1 } },
			{ "IVORY_R8SPYDER", 730000, { "driver" }, { "", "", -1 } },
			{ "IVORY_REV", 690000, { "driver" }, { "", "", -1 } },
			{ "ivory_lfa", 1390000, { "driver" }, { "", "", -1 } },
			{ "ivory_c", 1260000, { "driver" }, { "", "", -1 } }
        };
    };

	class showroom {
        side = "civ";
        vehicles[] = {
      { "Jonzie_Quattroporte", 150000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_30CSL", 30000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Viper", 45000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Datsun_Z432", 50000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_STI", 73000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Escalade", 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Datsun_510", 20000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Ceed", 7500, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Raptor", 40000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Galant", 5000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Corolla", 3500, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Mini_Cooper", 1000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Mini_Cooper_R_spec", 5000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_XB", 30000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_VE", 30000, { "driver" }, { "", "", -1 } },
			{ "Jonzie_Ute", 30000, { "driver" }, { "", "", -1 } }
        };
    };

	class exo {
        side = "civ";
        vehicles[] = {
            { "cg_peugeot_207_rc_noir",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_violet",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_rose",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_orange",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_grise",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_vert",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_bleufonce",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_bleu",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_white",40000, { "driver" }, { "", "", -1 } },
            { "cg_peugeot_207_rc_jaune",40000, { "driver" }, { "", "", -1 } },

            { "cg_volkswagen_touareg_noir",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_violet",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_rose",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_orange",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_grise",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_vert",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_bleufonce",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_bleu",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_white",60000, { "driver" }, { "", "", -1 } },
            { "cg_volkswagen_touareg_jaune",60000, { "driver" }, { "", "", -1 } },

            { "cg_vw_golfvi_noir",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_violet",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_rose",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_orange",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_grise",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_vert",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_bleufonce",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_bleu",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_white",60000, { "driver" }, { "", "", -1 } },
            { "cg_vw_golfvi_jaune",60000, { "driver" }, { "", "", -1 } },

            { "cg_jeep_cherokee_noir",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_violet",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_rose",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_orange",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_grise",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_vert",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_bleufonce",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_bleu",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_white",139000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_cherokee_jaune",139000, { "driver" }, { "", "", -1 } },

            { "cg_audi_rs4_noir",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_violet",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_rose",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_orange",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_grise",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_vert",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_bleufonce",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_bleu",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_white",140000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs4_jaune",140000, { "driver" }, { "", "", -1 } },

            { "cg_audi_rs5_noir",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_violet",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_rose",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_orange",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_grise",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_vert",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_bleufonce",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_bleu",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_white",240000, { "driver" }, { "", "", -1 } },
            { "cg_audi_rs5_jaune",240000, { "driver" }, { "", "", -1 } },

            { "cg_bmw_1series_m_noir",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_violet",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_rose",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_orange",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_grise",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_vert",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_bleufonce",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_bleu",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_white",290000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_1series_m_jaune",290000, { "driver" }, { "", "", -1 } },

            { "cg_renault_megane_rs_2015_noir",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_violet",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_rose",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_orange",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_grise",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_vert",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_bleufonce",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_bleu",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_white",390000, { "driver" }, { "", "", -1 } },
            { "cg_renault_megane_rs_2015_jaune",390000, { "driver" }, { "", "", -1 } },

            { "Mrshounka_c63_2015_bleufonce",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_grise",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_jaune",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_noir",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_orange",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_rose",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_rouge",380000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_c63_2015_violet",380000, { "driver" }, { "", "", -1 } },

            { "cg_bmw_m6_noir",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_violet",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_rose",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_orange",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_grise",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_vert",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_bleufonce",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_bleu",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_white",390000, { "driver" }, { "", "", -1 } },
            { "cg_bmw_m6_jaune",390000, { "driver" }, { "", "", -1 } },

            { "cg_raptor_truck_noir",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_violet",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_rose",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_orange",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_grise",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_vert",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_bleufonce",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_bleu",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_white",390000, { "driver" }, { "", "", -1 } },
            { "cg_raptor_truck_jaune",390000, { "driver" }, { "", "", -1 } },

            { "cg_porsche_911_82_noir",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_violet",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_rose",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_orange",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_grise",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_vert",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_bleufonce",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_bleu",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_white",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_911_82_jaune",490000, { "driver" }, { "", "", -1 } },

            { "cg_porsche_cayenne_noir",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_violet",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_rose",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_orange",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_grise",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_vert",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_bleufonce",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_bleu",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_white",490000, { "driver" }, { "", "", -1 } },
            { "cg_porsche_cayenne_jaune",490000, { "driver" }, { "", "", -1 } },

            { "cg_bowler_offroad_noir",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_violet",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_rose",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_orange",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_grise",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_vert",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_bleufonce",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_bleu",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_white",490000, { "driver" }, { "", "", -1 } },
            { "cg_bowler_offroad_jaune",490000, { "driver" }, { "", "", -1 } },

            { "shounka_gt_bleufonce",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_grise",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_jaune",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_noir",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_orange",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_rose",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_rouge",600000, { "driver" }, { "", "", -1 } },
            { "shounka_gt_violet",600000, { "driver" }, { "", "", -1 } },

            { "Mrshounka_mercedes_190_p_bleufonce",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_grise",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_jaune",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_noir",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_orange",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_rose",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_rouge",620000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_mercedes_190_p_violet",620000, { "driver" }, { "", "", -1 } },

            { "AM_Holden_White",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_Black",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_Green",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_DarkGreen",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_OffGreen",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_blue",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_OffYellow",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_Pink",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_Purple",785000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_Yellow",785000, { "driver" }, { "", "", -1 } },

            { "cg_nissan_gtr_2012_noir",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_violet",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_rose",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_orange",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_grise",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_vert",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_bleufonce",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_bleu",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_white",790000, { "driver" }, { "", "", -1 } },
            { "cg_nissan_gtr_2012_jaune",790000, { "driver" }, { "", "", -1 } },

            { "shounka_mp4_bleufonce",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_grise",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_jaune",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_noir",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_orange",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_rose",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_rouge",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_mp4_violet",1110000, { "driver" }, { "", "", -1 } },

            { "shounka_clk_bleufonce",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_grise",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_jaune",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_noir",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_orange",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_rose",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_rouge",1110000, { "driver" }, { "", "", -1 } },
            { "shounka_clk_violet",1110000, { "driver" }, { "", "", -1 } },

            { "cg_jeep_blinde_noir",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_violet",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_rose",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_orange",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_grise",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_vert",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_bleufonce",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_bleu",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_white",1390000, { "driver" }, { "", "", -1 } },
            { "cg_jeep_blinde_jaune",1390000, { "driver" }, { "", "", -1 } },

            { "cg_lancer_evo_x_noir",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_violet",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_rose",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_orange",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_grise",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_vert",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_bleufonce",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_bleu",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_white",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lancer_evo_x_jaune",1590000, { "driver" }, { "", "", -1 } },

            { "Mrshounka_pagani_c_bleufonce",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_grise",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_jaune",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_noir",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_orange",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_rose",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_rouge",1590000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_pagani_c_violet",1590000, { "driver" }, { "", "", -1 } },

            { "cg_lambo_veneno_noir",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_violet",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_rose",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_orange",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_grise",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_vert",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_bleufonce",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_bleu",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_white",1590000, { "driver" }, { "", "", -1 } },
            { "cg_lambo_veneno_jaune",1590000, { "driver" }, { "", "", -1 } },

            { "AM_Holden_RBlue",1985000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_RRed",1985000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_RWhite",1985000, { "driver" }, { "", "", -1 } },
            { "AM_Holden_RBlack",1985000, { "driver" }, { "", "", -1 } },

            { "Mrshounka_lykan_c_bleufonce",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_grise",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_jaune",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_noir",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_orange",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_rose",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_rouge",2000000, { "driver" }, { "", "", -1 } },
            { "Mrshounka_lykan_c_violet",2000000, { "driver" }, { "", "", -1 } },

            { "shounka_f430_spider_bleufonce",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_grise",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_jaune",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_noir",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_orange",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_rose",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_rouge",2200000, { "driver" }, { "", "", -1 } },
            { "shounka_f430_spider_violet",2200000, { "driver" }, { "", "", -1 } },

            { "shounka_porsche911_bleufonce",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_grise",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_jaune",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_noir",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_orange",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_rose",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_rouge",2300000, { "driver" }, { "", "", -1 } },
            { "shounka_porsche911_violet",2300000, { "driver" }, { "", "", -1 } },

            { "CG_Lamborghini_Aventador_Red", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_Black", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_Blue", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_Green", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_Orange", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_Purple", 3000000, { "driver" }, { "", "", -1 } },
            { "CG_Lamborghini_Aventador_White", 3000000, { "driver" }, { "", "", -1 } },

            { "A3L_EvoXrally_green",3999999, { "driver" }, { "", "", -1 } },
            { "A3L_EvoXrally_white",3999999, { "driver" }, { "", "", -1 } },
            { "A3L_EvoXrally_red",3999999, { "driver" }, { "", "", -1 } },
            { "A3L_EvoXrally_blue",3999999, { "driver" }, { "", "", -1 } }
        };
    };

	class sub {
        side = "civ";
        vehicles[] = {
            { "DAR_TahoeCivSilver",140000, { "driver" }, { "", "", -1 } },
            { "DAR_TahoeCivBlue",140000, { "driver" }, { "", "", -1 } },
            { "DAR_TahoeCivRed",140000, { "driver" }, { "", "", -1 } },
            { "DAR_TahoeCivBlack",140000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanWhite",190000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanBlue",190000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanRed",190000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanBlack",190000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanGrey",190000, { "driver" }, { "", "", -1 } },
            { "A3L_SuburbanOrange",190000, { "driver" }, { "", "", -1 } },
            { "A3L_Camaro",195000, { "driver" }, { "", "", -1 } }
        };
    };

	class jones_car {
        side = "civ";
        vehicles[] = {
            { "Jonzie_Mini_Cooper", 2500, { "" }, { "", "", -1 } },
            { "Jonzie_Mini_Cooper_R_spec", 9500, { "driver" }, { "", "", -1 } },
            { "Jonzie_Galant", 12500, { "driver" }, { "", "", -1 } },
            { "Jonzie_Corolla", 30000, { "driver" }, { "", "", -1 } },
            { "Jonzie_30CSL", 40000, { "driver" }, { "", "", -1 } },
			      { "Jonzie_Datsun_510", 2500, { "" }, { "", "", -1 } },
            { "Jonzie_Datsun_Z432", 9500, { "driver" }, { "", "", -1 } },
            { "Jonzie_XB", 12500, { "driver" }, { "", "", -1 } },
            { "Jonzie_VE", 30000, { "driver" }, { "", "", -1 } },
            { "Jonzie_Quattroporte", 40000, { "driver" }, { "", "", -1 } },
            { "Jonzie_Ute", 9500, { "driver" }, { "", "", -1 } },
            { "Jonzie_Ceed", 12500, { "driver" }, { "", "", -1 } },
            { "Jonzie_Transit", 30000, { "driver" }, { "", "", -1 } }
        };
    };

    class f1_shop {
        side = "civ";
        vehicles[] = {
            { "vvv_formula1_twitch", 35000 , { "driver" }, { "", "", -1 } },
            { "vvv_formula1_Mclaren", 35000, { "driver" }, { "", "", -1 } },
            { "vvv_formula1_Netflix1", 35000, { "driver" }, { "", "", -1 } },
            { "vvv_formula1_Netflix2", 35000 , { "driver" }, { "", "", -1 } },
            { "vvv_formula1_ferrari", 35000, { "driver" }, { "", "", -1 } },
            { "vvv_formula1_sayeed", 35000, { "driver" }, { "", "", -1 } },
            { "vvv_formula1_tmac", 35000 , { "driver" }, { "", "", -1 } },
            { "vvv_formula1_andy", 35000, { "driver" }, { "", "", -1 } },
            { "vvv_formula1_redbull", 35000, { "driver" }, { "", "", -1 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 15000 , { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 15000, { "driver" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 10000, { "" }, { "", "", -1 } },
            { "I_Truck_02_medical_F", 25000, { "" }, { "", "", -1 } },
            { "O_Truck_03_medical_F", 45000, { "" }, { "", "", -1 } },
            { "B_Truck_01_medical_F", 60000, { "" }, { "", "", -1 } },
			      { "C_SUV_01_F", 20000, { "" }, { "", "", -1 } },
			      { "Jonzie_Ambulance", 20000, { "" }, { "", "", -1 } },
		    };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 50000, { "mAir" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 75000, { "mAir" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 60000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 75000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 100000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 275000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_transport_F", 200000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 250000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 350000, { "trucking" }, { "", "", -1 } },
			      { "Jonzie_Box_Truck", 60000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Flat_Bed", 75000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Log_Truck", 100000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Tanker_Truck", 275000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Tow_Truck", 200000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Superliner", 250000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Western", 350000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Curtain_Roadtrain", 350000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Curtain", 350000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Flatbed_Roadtrain", 350000, { "trucking" }, { "", "", -1 } },
            { "Jonzie_Flatbed", 350000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 450000, { "trucking" }, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 2500, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_F", 12500, { "" }, { "", "", -1 } },
            { "O_MRAP_02_F", 150000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 325000, { "" }, { "", "", -1 } },
            { "B_G_Offroad_01_armed_F", 750000, { "rebel" }, { "", "", -1 } }
        };
    };

    class police_car {
        side = "cop";
        vehicles[] = {
            { "bsg_CVPILVPD", 2500, { "police" }, { "", "", -1 } },
			      { "bsg_CVPILVPDLB", 2500, { "police" }, { "", "", -1 } },
			      { "bsg_TaurusLVPD", 2500, { "police" }, { "", "", -1 } },
			      { "bsg_TaurusLVPDLB", 2500, { "police" }, { "", "", -1 } },
			      { "cg_evopol1", 2500, { "police" }, { "", "", -1 } },
            { "DAR_Explorer_Police", 2500, { "police" }, { "", "", -1 } },
			      { "charger_pd", 2500, { "police" }, { "", "", -1 } },
			      { "A3L_TaurusUCWhite", 2500, { "police" }, { "", "", -1 } },
			      { "A3L_TaurusUCRed", 2500, { "police" }, { "", "", -1 } },
			      { "A3L_TaurusUCBlue", 2500, { "police" }, { "", "", -1 } },
            { "A3L_CVPIUCBlue", 2500, { "police" }, { "", "", -1 } },
            { "A3L_CVPIUCRed", 2500, { "police" }, { "", "", -1 } }
        };
    };
    class police1_car {
        side = "cop";
        vehicles[] = {
            { "bsg_CVPILDPD", 2500, { "police" }, { "", "", -1 } },
			      { "bsg_CVPILDPDLB", 2500, { "police" }, { "", "", -1 } },
            { "bsg_TaurusLDPD", 2500, { "police" }, { "", "", -1 } },
			      { "bsg_TaurusLDPDLB", 2500, { "police" }, { "", "", -1 } },
			      { "cg_evopol1", 2500, { "police" }, { "", "", -1 } },
            { "DAR_ExplorerPolice", 2500, { "police" }, { "", "", -1 } },
			      { "charger_pd", 2500, { "police" }, { "", "", -1 } },
            { "A3L_TaurusUCWhite", 2500, { "police" }, { "", "", -1 } },
			      { "A3L_TaurusUCRed", 2500, { "police" }, { "", "", -1 } },
			      { "A3L_TaurusUCBlue", 2500, { "police" }, { "", "", -1 } },
            { "A3L_CVPIUCBlue", 2500, { "police" }, { "", "", -1 } },
            { "A3L_CVPIUCRed", 2500, { "police" }, { "", "", -1 } }
        };
    };
    class sheriff_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPISH", 2500, { "sheriff" }, { "", "", -1 } },
          { "bsg_CVPISHLB", 2500, { "sheriff" }, { "", "", -1 } },
          { "bsg_TaurusSH", 2500, { "police" }, { "", "", -1 } },
          { "bsg_TaurusSHLB", 2500, { "police" }, { "", "", -1 } },
          { "cg_evoss1", 2500, { "police" }, { "", "", -1 } },
          { "DAR_ExplorerSheriff", 2500, { "police" }, { "", "", -1 } },
          { "charger_sh", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCWhite", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCRed", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCRed", 2500, { "police" }, { "", "", -1 } }
        };
    };
    class sert_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPISERT", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_CVPISERTLB", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_TaurusSERT", 2500, { "police" }, { "", "", -1 } },
          { "bsg_TaurusSERTLB", 2500, { "police" }, { "", "", -1 } },
          { "cg_evoSERT1", 2500, { "police" }, { "", "", -1 } },
          { "DAR_ExplorerSheriff", 2500, { "police" }, { "", "", -1 } },
          { "charger_sert", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCWhite", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCRed", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCRed", 2500, { "police" }, { "", "", -1 } }
        };
    };
    class crt_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPICRT", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_CVPICRTLB", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_TaurusCRT", 2500, { "police" }, { "", "", -1 } },
          { "bsg_TaurusCRTLB", 2500, { "police" }, { "", "", -1 } },
          { "cg_evocor1", 2500, { "police" }, { "", "", -1 } },
          { "DAR_ExplorerSheriff", 2500, { "police" }, { "", "", -1 } },
          { "charger_sh", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCWhite", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCRed", 2500, { "police" }, { "", "", -1 } },
          { "A3L_TaurusUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCBlue", 2500, { "police" }, { "", "", -1 } },
          { "A3L_CVPIUCRed", 2500, { "police" }, { "", "", -1 } }
        };
    };
    class doc_car {
        side = "cop";
        vehicles[] = {
          { "bsg_CVPIDOC", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_CVPIDOC", 2500, { "sert" }, { "", "", -1 } },
          { "bsg_TaurusDOC", 2500, { "police" }, { "", "", -1 } },
          { "bsg_TaurusDOCLB", 2500, { "police" }, { "", "", -1 } },
          { "rev_audi_a4_police", 2500, { "doc" }, { "", "", -1 } },
          { "cg_evocor1", 2500, { "police" }, { "", "", -1 } },
          { "DAR_ExplorerSheriff", 2500, { "police" }, { "", "", -1 } },
          { "charger_sh", 2500, { "police" }, { "", "", -1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_F", 253000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 750000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_F", 75000, { "cAir" }, { "", "", -1 } },
            { "B_Heli_Transport_01_F", 200000, { "cAir" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 3000, { "cg" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 20000, { "cg" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 75000, { "cg" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_SDV_01_F", 100000, { "cg" }, { "", "", -1 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 5000, { "boat" }, { "", "", -1 } },
            { "C_Boat_Civil_01_F", 22000, { "boat" }, { "", "", -1 } },
            { "B_SDV_01_F", 150000, { "boat" }, { "", "", -1 } }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    storageFee (Getting vehicles out of garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    garageSell (Selling vehicles from garage) format:
    *        INDEX 0: Civilian Price
    *        INDEX 1: Cop Price
    *        INDEX 2: EMS Price
    *        INDEX 3: OPFOR Price (Not implemented in vanilla but still leaving support
    *
    *    Textures config follows { Texture Name, side, {texture(s)path}}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    	INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    */

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        storageFee[] = { 0, 0, 1500, 0 };
        garageSell[] = { 0, 0, 5000, 0 };
        insurance = 2500;
        chopShop = 12500;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 0, 0, 3000, 0 };
        garageSell[] = { 0, 0, 10000, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 0, 0, 6500, 0 };
        garageSell[] = { 0, 0, 25000, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
        garageSell[] = { 950, 350, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        storageFee[] = { 0, 50000, 0, 0 };
        garageSell[] = { 0, 85000, 0, 0 };
        insurance = 16000;
        chopShop = 45000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
			{ "Met", "cop", {
				"textures\swat_hunter_1.jpg"
            } }
        };
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 0, 16500, 0, 0 };
        garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 21000, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
        garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 350;
        storageFee[] = { 95000, 0, 0, 0 };
        garageSell[] = { 185000, 0, 0, 0 };
        insurance = 25000;
        chopShop = 225000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 4000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 4500, 2500, 0, 0 };
        garageSell[] = { 6800, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 11000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
        garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 450;
        storageFee[] = { 35000, 0, 0, 0 };
        garageSell[] = { 150000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 175000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        storageFee[] = { 25650, 0, 0, 0 };
        garageSell[] = { 135000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 127500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = { };
    };

    class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 500, 650, 1000 };
        garageSell[] = { 6500, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6250;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
			      { "Medic Offroad", "med", {
                "textures\med_offroad.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_twitch {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_Mclaren {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_Netflix1 {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_Netflix2 {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_ferrari {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_sayeed {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_tmac {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_andy {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class vvv_formula1_redbull {
        vItemSpace = 20;
        storageFee[] = { 1500, 0, 0, 0 };
        garageSell[] = { 3500, 0, 0, 0 };
        insurance = 1650;
        chopShop = 7500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 15000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
			{ "Police MET Hatch", "cop", {
                "textures\hatch.jpg"
            } },
			{ "Rally spec", "civ", {
                "textures\rally.jpg"
            } },
			{ "Blaze It", "civ", {
                "textures\ganja.jpg"
            } },
			{ "Noddy", "civ", {
                "textures\NODDY.jpg"
            } },
			{ "Hello Kitty", "civ", {
                "textures\hellokittyHB.jpg"
            } }

        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 950, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1250;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            } },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        storageFee[] = { 14500, 0, 0, 0 };
        garageSell[] = { 62000, 0, 0, 0 };
        insurance = 6500;
        chopShop = 50000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
        garageSell[] = { 49800, 3500, 0, 0 };
        insurance = 6500;
        chopShop = 37500;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        storageFee[] = { 25000, 0, 0, 0 };
        garageSell[] = { 65000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 4500, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 4750;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 15000, 7500, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Police", "cop", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Police MET", "cop", {
                "textures\cop_suv.jpg"
            } },
			{ "Police MET", "med", {
                "textures\med_suv.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 25000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 22500;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
        garageSell[] = { 35000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 30000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 7500, 0, 0 };
        garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 15000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        storageFee[] = { 45000, 19500, 0, 0 };
        garageSell[] = { 57000, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        storageFee[] = { 55000, 0, 22000, 0 };
        garageSell[] = { 72500, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 375000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = 375;
        storageFee[] = { 75000, 0, 0, 0 };
        garageSell[] = { 125000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        storageFee[] = { 37500, 10000, 0, 0 };
        garageSell[] = { 75000, 50000, 0, 0 };
        insurance = 2500;
        chopShop = 75000;
        textures[] = {};
    };
};
